#include"iostream"
#include"stdio.h"
using namespace std;
int main(){
    freopen("ttttp.inp","r",stdin);
    freopen("ttttp.out","w",stdout);
    int t,n;cin>>t;
    for(int i=1;i<=t;i++){
		cin>>n;int tongnuadau=0,tongnuacuoi=0,temp;
		for(int j=1;j<=n/2;j++){
			cin>>temp;tongnuadau+=temp;
		}
		for(int j=n/2+1;j<=n;j++){
			cin>>temp;tongnuacuoi+=temp;
		}
		cout<<tongnuadau*tongnuacuoi<<"\n";
    }
}