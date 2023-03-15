x=c(-2,-1,5,-5,2)
y=c(-3,-4,-10,0,-7)
cor(x,y)

# q5
rm(list=ls()) # removes all variables stored previously
library(Hmisc)
women <- read.csv("D:/Visual Studio Code/GIT-1/R-Studio/Week-6/women.csv")
model_1=lm(formula=women$weight~women$height)
print(model_1)
summary(model_1)
# plot(y,x,women$weight,women$height)
