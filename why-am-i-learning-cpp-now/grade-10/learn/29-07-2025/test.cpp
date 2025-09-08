#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
#define ll long long 
ll n,a;
stack<ll>st;
queue<ll>q;
priority_queue<ll,vector<ll>>pq;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	while(n--){
		cin>>a;
		st.push(a);
		q.push(a);
		pq.push(a);
	}
	cout<<"stack: ";
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<"\nqueue: ";
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<"\npriority queue: ";
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
}
