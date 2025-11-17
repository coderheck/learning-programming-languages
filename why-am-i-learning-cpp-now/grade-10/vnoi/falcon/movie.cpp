#include<iostream>
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=1000005;
ll m,n,e[maxN],l[maxN],days=1,rem;
int main(){
	std::cin>>m>>n;rem=m;
    for(int i=1;i<=n;i++){std::cin>>e[i]>>l[i];}
    for(int i=1;i<=n;i++){
        if(rem>=l[i]){
            ll time=min(e[i],rem/l[i]);
            e[i]-=time,rem-=time*l[i];
        }
        if(!e[i]){continue;}
        ll time=m/l[i],q=e[i]/time;
		if(q){days+=q,e[i]-=q*time,rem=m-time*l[i];}
        if(e[i]){days++,rem=m-e[i]*l[i];}
    }
	std::cout<<days<<" "<<rem;
}
