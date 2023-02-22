#2
A=matrix(c(1,2,3,2,3,6,4,5,9),3,3,byrow = T)
rank=Rank(A)
print(rank)

#------------------
#eg1
A=matrix(c(1,2,4,3),2,2)
print(eigen(A))

# ---------------

#-----------------

#4
A=matrix(c(1,2,4,3),2,2)
print(eigen(A))

#--------------------
#5
A=matrix(c(-1,2,2),3,1,byrow = T)
B=t(A)
C=A%*%B
print(C)
print(eigen(C))

#-------------------------
q=2^3
print(q)

#----------------------------
#6
A=matrix(c(1,2,4,3),2,2)
# print(det(inv(A)))
# print(det(A)^-1)
B=matrix(c(1,0,0,1),2,2)
print(det(A%*%B))
print(det(A)*det(B))

#------------------------
#7 part1
A=matrix(c(2,1,3,-1,1,-3,3,-2,8),3,3,byrow = T)
print(det(A))
# #part2
# v1=matrix(c(2,-1,3),3,1,byrow = F)
# v2=matrix(c(1,1,-2),3,1,byrow = F)
# v3=matrix(c(3,-3,8),3,1,byrow = F)

#8
A=matrix(c(1,2,3,2,5,7,2,4,6),3,3,byrow = T)
print(Rank(A))
print(rank(A))

#9
v1=matrix(c(1,-1,-2),3,1)
v2=matrix(c(2,0,1),1,3)
Z=v1%*%v2
print(det(Z))








