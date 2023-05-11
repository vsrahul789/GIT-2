rm(list=ls())
library(dplyr)
library(GGally)
library(ggfortify)
library(ggplot2)

iris_csv_iris <- read.csv("Week-7/iris.csv - iris.csv",header = T,row.names="ID",stringsAsFactors = T)
str(iris_csv_iris)
summary(iris_csv_iris)
# 6) dimensions of iris data set
dim(iris_csv_iris)
# 7) distribution of the independent variables in the dataframe
# mean ~= meadian
# 8) no of rows contain missing data
sum(is.na(iris_csv_iris))

#9) which apply to be used to get given answer
# syntax of apply , tapply, lapply, sapply

# See the brave bookmarks in 
# "Other bookmark/Data science/A Guide to apply(), lapply(), sapply(), and tapply() in R - Statology"


