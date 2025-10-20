#include"iostream"
#include"algorithm"
#include"string"
using namespace std;
string x,y="";int n;
void s1(){
  string y="";
  for(int i=0;i<n;i++){
    y+=x[i];reverse(y.begin(),y.end());
  }
  cout<<y<<"\n";
}
void prRev(){for(int i=n-1;i>=0;i--){cout<<y[i];}}
void s2(){  
  for(int i=0;i<n;i++){
    if(i%2==0){y+=x[i];}else{y.insert(y.begin()+0,x[i]);}
  }
  cout<<y;
}
int main(){
  cin>>x;
  n=x.size();
  s1();
  s2();
}

// #include<bits/stdc++.h>
// using namespace std;
// int n;
// string s,st="";
// main()
// {
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(0);
//     cout.tie(0);
//     cin>>s;
//     for(int i=0;i<s.size();i++){
//         if(i%2!=0)
//         st+=s[i];
//         else st.insert(st.begin()+0,s[i]);
//     }
//     cout<<st;
// }