rm(list = ls())
serviceTrainData <- read.csv("Week-8/serviceTrainData.csv")
serviceTestData <- read.csv("Week-8/serviceTestData.csv")
library(caret)
library(class)
library(tidyverse)
serviceTrainData$Service=as.factor(serviceTrainData$Service)
serviceTestData$Service=as.factor(serviceTestData$Service)
#structure of data
str(serviceTrainData)
str(serviceTestData)
#summary of the data
summary(serviceTrainData)
summary(serviceTestData)
#implimentation of knn
pridictedknn=knn(train=serviceTrainData[,-6] , test = serviceTestData[,-6],cl=serviceTrainData$Service,k=3)
print(pridictedknn)
#confusion matrix
conf_matrix = confusionMatrix(table(pridictedknn,serviceTestData$Service))
print(conf_matrix)
