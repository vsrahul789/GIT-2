# creating a matrix

A=matrix(c(1,2,3,4,5,6,7,8,9),nrow=3,ncol=3,byrow = TRUE)
# colnames(A)=(c('a','b','c'))
# rownames(A)=(c('d','e','f'))
# b=diag(c(1,2,3,4),4,4)
# print(b)
A[1:3]

print(A[2,])

# A[3,3]=13


print(A)
print(A[2,])
print(A[,3])
print(c(A[3,],A[,2]))
# print(A[c(1,3),1:2])
# print(A[c(1,3),c(1,2)])
print(A[c(1,2),c(1,3)])
B=matrix(c(10,11,12),nrow=1,ncol=3)
C=rbind(A,B)
print(C)


# matrix algebra
# addition
a=matrix(c(1,2,3,4,5,6,7,8,9),nrow=3,ncol=3,byrow = TRUE)
b=matrix(c(9,8,7,6,5,4,3,2,1),nrow=3,ncol=3,byrow = TRUE)
print(a+b)
print(a-b)
print(a*b)#perform regular element wise matrix multiplication to perform regular matrix multiplication
print(a%*%b)
print(a/b)

