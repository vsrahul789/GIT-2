rm(list = ls())

# Data 
data("iris")
str(iris)
summary(iris)

#Partition
ind = sample(2 , nrow(iris) , replace = T, prob = c(0.75 , 0.25))
training = iris[ind == 1,]
testing = iris[ind == 2,]

#Scatter plot and correlation

library(psych)

pairs.panels(training[,-5],
             gap = 0,
             bg = c("red" , "yellow" , "blue")[training$Species],
             pch = 21)

#Principle Component Analysis

pc = prcomp(training[, -5],
            center = T,
            scale. = T)
##center here means calculate all the average in the training set
pc$center
pc$scale
attributes(pc)
print(pc)

summary(pc)

#Orthogonality in principle analysis

pairs.panels(pc$x,
             gap = 0,
             bg = c('red' , 'yellow' , 'blue')[training$Species],
             pch = 21)

# Bi-Plot
library(devtools)
Sys.setenv(R_REMOTES_NO_ERRORS_FROM_WARNINGS="true")
# install_github("vqv/ggbiplot") its already installed
library(ggbiplot)

g = ggbiplot(pc ,
             obs.scale = 1,
             var.scale = 1,
             groups = training$Species,
             ellipse = T,
             circle = T,
             ellipse.prob = 0.68)

g = g + scale_colour_discrete(name = "")
g = g + theme(legend.direction = "horizontal",
              legend.position = "top")

print(g)


# Pridictions With PCs

trg = predict(pc , training)
trg = data.frame(trg , training[5])
trg

tst = predict(pc , testing)
tst = data.frame(tst , testing[5])
tst


# Multinomial Logistic Regression Model with pc

library(nnet)
trg$Species = relevel(trg$Species , ref = "setosa")
mymodel = multinom(Species ~ PC1+PC2 ,data = trg)
summary(mymodel)

# Confusion matrix and Misclassification error training

p = predict(mymodel , trg)
tab = table(p , trg$Species)
tab
1- sum(diag(tab)/sum(tab))

# Confusion matrix and Misclassification error testing

p = predict(mymodel , tst)
tab = table(p , tst$Species)
tab
1-sum(diag(tab)/sum(tab))











