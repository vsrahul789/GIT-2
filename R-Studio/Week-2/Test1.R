A=matrix(c(0.36,0.48,0,0.48,0.64,0,0,0,2),nrow = 3,byrow = T)
# colnames(A)=c('a','b','c')
# rownames(A)=c('d','e','f')
lamda=matrix(c(0,1,2),nrow = 3)
i=matrix(c(1,0,0,0,1,0,0,0,1),nrow = 3,byrow = TRUE)
ei=i%*%lamda
v1=A[,1]-ei
v2=A[,2]-ei
v3=A[,3]-ei
print(v1)
print(v2)
print(v3)
