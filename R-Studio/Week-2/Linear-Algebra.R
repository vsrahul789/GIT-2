rm(list = ls())
a=matrix(c(1,2,3,0,0,1),nrow = 3,ncol = 2)
# b=matrix(c(1,2,3),nrow = 3,ncol = 1)
# c=a%*%b
# library(pracma)
# Rank(a)

# print(inv(a))

b=matrix(c(1,2,5),nrow=3,byrow = FALSE)
# print(inv(b))

# op=inv(t(a)%*%a) %*% (t(a) %*% b)
# print(op)
print("-----------------------------------")
library(MASS)
c=ginv(a)%*%b
