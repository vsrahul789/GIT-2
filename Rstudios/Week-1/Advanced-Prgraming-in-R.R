# Functions
# print(v)

A=matrix(1:9,3,3)
B=matrix(10:18,3,3)
mylist=list(A,B)
print(mylist)
lapply(mylist, det)
dia=list(1,2,3,4)
len=list(1,2,3,4)

vol=mapply(volcyl,dia,len)
print(vol)
