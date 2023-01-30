n=10
sum=0
for(i in seq(1,n,by=1)){
   sum=sum+i
   if(sum %% 2 == 0){
      next
   }
   print(c(i,sum))
}
   