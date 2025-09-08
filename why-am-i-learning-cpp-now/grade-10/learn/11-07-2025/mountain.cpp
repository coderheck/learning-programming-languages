void update(ll id,ll l,ll r,ll i,ll val){
	if(l==r){st[id]=val;}
	ll m=l+(r-l)/2;
	if(i<=m){
		upd(2*id,l,m,i,val);
	}else{
		upd(2*id+1,m+1,r,i,val);
	}
	st[id]=max(st[2*id],st[2*id+1]);
}

