A=matrix(c(1,2,3,4,5,6,7,8,9),ncol=3,byrow=F)
library(pracma)
a=nullspace(A)
print(a)
print(dim(a))
# b=c(2,3,4)
# x=solve(A,b)

print("------------------------------------------")

C=matrix(c(1:9),3,3,byrow = F)
B=nullspace(C)
print(B)
print(dim(B))
print(rank(A))

