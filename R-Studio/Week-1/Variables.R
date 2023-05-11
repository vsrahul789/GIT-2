rm(list = ls())
# is.character("-")
# as.complex(2)
# typeof(1)
# is.Date(23-10-2003)

# Data-Types:)

# Lists
# Vectors
# Data Frames

# Lists

#creating a list
# ID=c(1,2,3,4,5)
# emp.name=c("Rahul","Vishnu","Tagaru","Mama","Tarun")
# num.emp=3
# emp.list=list(ID,emp.name,num.emp)
# print(emp.list)

# # accessing a list
# emp.list=list("Id"=ID,"Names"=emp.name,"num"=num.emp)
# print(emp.list$Names)
# print(emp.list$Id)

# # Accessing using "Indices" 
# print(emp.list[[1]])
# print(emp.list[[1]][3])
# print(emp.list[[2]][2])
# print(emp.list[[2]][3])

# # Replacing or Manipulating the list

# emp.list[[2]][6]="Bharath.B"
# emp.list[[1]][6]=6
# print(emp.list)

# # Concatinating the list

# emp.ages=list("ages"=c(19,19,18,19,18))

# emp.list=c(emp.list,emp.ages)

# print(emp.list)


# Data Frames:)

# creating a Data Frame

vec1=c(1,2,3)
vec2=c("R","Scilab","Java")
vec3=c("For DataScience","For Don't Know","For Mandatory")

df=data.frame(vec1,vec2,vec3)
print(df)
print("-----------------------------")

# accessing data frame
# eg1

print(df[1:2,]) #To Access 1st and 2nd row

print(df[,1:2]) #To Access 1st and 2nd coloumn

df[[2]][2]="Python"
df[[3]][2]="others"
print(df)


#eg2

# create data frame of people's BS and BP

pd=data.frame("Name"=c("Rahul","Rahul","Sohan","Roman","Dean") , "Month"=c
("Jan","Feb","March","April","June"), "BS"=c(141.2,142.5,121.6,139.5,140), "BP"=c(96,98,92,90,95))

print(pd)

# pd2=subset(pd,Name=="Rahul"|BS>135)
# print(pd2)

# myTable=data.frame()
# myTable=edit(data.frame)









