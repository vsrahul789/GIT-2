rm(list = ls())
iris_data <- read.csv("Week-7/iris.csv - iris.csv",header = T,row.names = "ID")
library(caTools)

iris_data $ Species = as.factor(iris_data$Species)

library(ggplot2)
library(GGally)

ggpairs(iris_data)
 
str(iris_data)


summary(iris_data)
