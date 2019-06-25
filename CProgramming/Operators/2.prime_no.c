char* primality(int n) {
    int flag=1;
    if(n==1){
        return "Not prime";
    }
    for(int i=2;i<=sqrt(n);i++){
         if(n%i==0)
          {flag=0;
          break;}
    }
return flag ? "Prime" : "Not prime";
}
