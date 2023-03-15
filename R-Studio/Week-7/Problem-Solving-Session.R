iris_data= read.csv("D:/Visual Studio Code/GIT-1/R-Studio/Week-7/iris.csv - iris.csv",header = T,row.names = "ID",stringsAsFactors = T)
# q6
dim(iris_data)
View(iris_data)
# q7
summary(iris_data)
library(ggplot2)
library(GGally)
ggpairs(iris_data)
# q8




# q9
# d)
apply(iris_data[,3:4],1,mean)
# b)
sapply(iris_data[,3:4],mean)
# c)
lapply(iris_data[,3:4],mean)


# q10
sum(is.na(iris_data))
