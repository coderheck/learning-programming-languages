// -*- lsst-c++ -*-
/*
* LSST Data Management System
* See COPYRIGHT file at the top of the source tree.
*
* This product includes software developed by the
* LSST Project (http://www.lsst.org/).
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the LSST License Statement and
* the GNU General Public License along with this program. If not,
* see <http://www.lsstcorp.org/LegalNotices/>.
*/

/**
 * @defgroup BigNumbers
 * @file big_datatype.h
 * @brief Used to construct and work with numbers larger than the unsigned long long datatype's limit (see ULLONG_MAX)
 * @ingroup BigNumbers
 * @author coderheck on GitHub, copied somewhere
 */

#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

typedef std::vector<int> big;

// READ/WRITE, MISCELLANEOUS FUNCTIONS AND OPERATORS FOR BIG NUMBERS

std::istream &operator >> (std::istream &cin, big &n){
    std::string s;std::cin>>s;
    n.clear();
    for(int i=0;i<s.size();i++){n.push_back(s[i]-'0');}
    return std::cin;
}
std::ostream &operator << (std::ostream &cout, const big &n){
    for(auto d : n){std::cout<<d;}
    return cout;
}
/** Converts an integer into a "number" of the "big" datatype.
* @param n Integer to convert
*/
big int_to_big(int n){
    big c;
    if(n==0){c.push_back(n);return c;}
    while(n){
        c.push_back(n);
        n/=10;
    }
    reverse(c.begin(),c.end());
    return c;
}
void addzero(big &n, int len){
    reverse(n.begin(),n.end());
    while(n.size()<len){n.push_back(0);}
    reverse(n.begin(),n.end());
}
void equalize_length(big &a, big &b){
    int len=std::max(a.size(),b.size());
    addzero(a,len);
    addzero(b,len);
}
bool operator < (big a, big b){
    equalize_length(a, b);
    for(int i=0;i<a.size();i++){
        if(a[i]<b[i]){
            return true;
        }else if(a[i]>b[i]){
            return false;
        }
    }
    return false;
}
bool operator > (big a, big b){
    equalize_length(a, b);
    for (int i=0;i<a.size();i++){
        if (a[i] > b[i]){return true;}
        else if (a[i] < b[i]){return false;}
    }
    return false;
}
bool operator <= (big a, big b){
    equalize_length(a,b);
    for (int i=0;i<a.size();i++){
        if (a[i] < b[i]){return true;}
        else if (a[i] > b[i]){return false;}
    }
    return true;
}
bool operator >= (big a, big b) {
    equalize_length(a, b);
    for (int i=0;i<a.size();i++){
        if (a[i] > b[i]){return true;}
        else if (a[i] < b[i]){return false;}
    }
    return true;
}
bool operator == (big a, big b) {
    equalize_length(a, b);
    for (int i=0;i<a.size();i++){
        if (a[i] != b[i]){return false;}
    }
    return true;
}
void del_leading_zero(big &n){
    reverse(n.begin(), n.end());
    while (n.size() >= 2){
        if(n.back() == 0){n.pop_back();}else{break;}
    }
    reverse(n.begin(), n.end());
}
big operator + (big a, big b){
    equalize_length(a,b);
    int len = a.size();
    big c;int rem=0;
    for(int i=len-1;i>=0;i--){
        int x=a[i]+b[i]+rem;
        rem=x/10;
        x%=10;
        c.push_back(x);
    }
    c.push_back(rem);
    reverse(c.begin(),c.end());
    del_leading_zero(c);
    return c;
}
big operator - (big a, big b){
    equalize_length(a,b);
    int len=a.size();
    big c;int rem=0;
    for(int i=len-1;i>=0;i--){
        int x=a[i]-b[i]-rem;
        if(x<0){x+=10;rem=1;}else{rem=0;}
        c.push_back(x);
    }
    reverse(c.begin(),c.end());
    del_leading_zero(c);
    return c;
}
big operator * (big a, big b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    big c(a.size()+b.size()+1);
    for(int i=0;i<(int)a.size();i++){
        for(int j=0;j<(int)b.size();j++){
            c[i+j]+=(a[i] * b[j]);
            c[i+j+1]+=(c[i+j]/10);
            c[i+j]%=10;
        }
    }
    c.push_back(0);
    for(int i=0;i<(int)c.size()-1;i++){
        c[i+1]+=(c[i]/10);
        c[i]%=10;
    }
    reverse(c.begin(),c.end());
    del_leading_zero(c);
    return c;
}
big operator / (big a, long long b){
    long long cur = 0;
    big c;
    for (int d : a){
        cur=cur*10+d;
        c.push_back(cur/b);
        cur%=b;
    }
    del_leading_zero(c);
    return c;
}
big operator / (big a, big b) {
    big c,l,r=a,one=int_to_big(1);
    c.push_back(0); l.push_back(1);
    while(l<=r){
        big mid=l+(r-l)/2;
        if (mid*b<=a){
            c=mid;l=mid+one;
        }else{
            r=mid-one;
        }
    }
    return c;
}
big operator % (big a, big b){
    big c=a/b*b;
    return a-c;
}
long long operator % (big a, long long b){
    long long res=0;
    for(int d : a){
        res=(res*10+d)%b;
    }
    return res;
}

// FUNCTION IMPLEMENTATIONS WITH THE "BIG" NUMBER DATATYPE

big gcd(big a, big b){
    big zero=int_to_big(0);
    while (b!=zero){
        big r=a%b;
        a=b; b=r;
    }
    return a;
}
