massF=function(k,p,n){
  fact=factorial(n)/factorial(n-k)*factorial(k)
  pro=(p^k)*(1-p)^(n-k)
  f=fact*pro
  return(f)
}