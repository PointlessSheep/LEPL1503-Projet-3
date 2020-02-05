int factorial(int n){
  if(n==0)
    return 1;
  if(n==1 || n==2)
    return n;
  else return n*factorial(n-1);
}
