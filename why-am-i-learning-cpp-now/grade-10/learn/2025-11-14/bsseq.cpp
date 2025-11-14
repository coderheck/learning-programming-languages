#include <iostream>
#include <stack>
using namespace std;
#define ll long long
#define taskname "bsseq"
const ll maxN=100005;
ll n,a[maxN],L[maxN],R[maxN],sum1=0,sum2=0;
stack<ll>st;
int main(){
	if(fopen(taskname".inp","r")){
		freopen(taskname".inp","r",stdin);
		freopen(taskname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}

	/* max sum */

	// L[i] = num of left nums including i to make a[i] the first max */ 
    for(ll i=0;i<n;i++){
        while(st.size()&&a[st.top()]<a[i]){st.pop();}
        L[i]=(st.empty()?i+1:i-st.top());
        st.push(i);
    }
    while(st.size()){st.pop();}

    /* R[i] = num of right nums including i */
    for(ll i=n-1;i>=0;i--){
        while(st.size()&&a[st.top()]<=a[i]){st.pop();}
        R[i]=(st.empty()?n-i:st.top()-i);
        st.push(i);
    }

    for(ll i=0;i<n;i++){sum1+=a[i]*L[i]*R[i];}

    /* min sum */

    while(st.size()){st.pop();}
    for(ll i=0;i<n;i++) {
        while(st.size()&&a[st.top()]>a[i]){st.pop();}
		L[i]=(st.empty()?i+1:i-st.top());
        st.push(i);
    }

    while (!st.empty()) st.pop();
    for(ll i=n-1;i>=0;i--) {
        while(st.size()&&a[st.top()]>=a[i]){st.pop();}
        R[i]=(st.empty()?n-i:st.top()-i);
        st.push(i);
    }

    for(ll i=0;i<n;i++){sum2+=a[i]*L[i]*R[i];}
    cout<<sum1-sum2;
}
