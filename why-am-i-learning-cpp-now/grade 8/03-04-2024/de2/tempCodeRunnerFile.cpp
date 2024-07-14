bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){if(n%i==0){nt=false;}}
  return nt;