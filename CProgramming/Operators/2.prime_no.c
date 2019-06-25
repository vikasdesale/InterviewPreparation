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


/*impored solution log n(1/2)  */

char* primality(int n) {
    int flag=1;
       if(n==2){
        return "Prime";
    }
    if(n==1 || (n&1)==0){
        return "Not prime";
    }
 
    for(int i=3;i<=sqrt(n);i+=2){
         if(n%i==0)
          {flag=0;
          break;}
    }
return flag ? "Prime" : "Not prime";
}
