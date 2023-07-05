rm(list = ls())

# Data

data("iris")
str(iris)

library(psych)
pairs.panels(iris[1:4],
             gap = 0,
             bg = c('red' , 'green','blue')[iris$Species],
             pch = 21)

# Data Partitioning
set.seed(42)
ind = sample(2 , nrow(iris) , replace = T , prob = c(0.70 , 0.30))
training = iris[ind == 1,]
testing = iris[ind == 2,]

# Linear Discriminant Analysis
library(MASS)
linear = lda(Species ~ . , data = iris)
linear
attributes(linear)

# Histogram

p = predict(linear , training)
ldahist(data = p$x[,1] , g = training$Species) #LDA 1
ldahist(data = p$x[,2] , g = training$Species) #LDA 2

# Bi-Plot
library(devtools)
# install_github("fawda123/ggord")
library(ggord)
ggord(linear ,training$Species , ylim = c(-10 , 10))

# Partition plot

library(klaR)
partimat(Species~. , data = training , method = "lda")
partimat(Species~. , data = training , method = "qda")

# Confusion Matrix and Accuracy Training Data

p1 = predict(linear ,training)$class
tab = table(Predicted = p1 , Actual = training$Species)
tab

sum(diag(tab))/sum(tab)

#Confusion Matrix and Accuracy -Testing Data

p2 = predict(linear, testing)$class
tab1 = table(Predicted = p2 , Actual = testing$Species)
print(tab1)






