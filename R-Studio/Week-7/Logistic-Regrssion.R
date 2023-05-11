rm(list=ls())
crashTest_1 <- read.csv("Week-7/crashTest_1.csv",row.names=1)
crashTest_1_TEST <- read.csv("Week-7/crashTest_1_TEST.csv",row.names=1)

crashTest_1$CarType=as.factor(crashTest_1$CarType) #very very important because to convert suv and hatchback to binomial variables ie 0 and 1

library(tidyverse)
# crashTest_1=crashTest_1 %>% mutate(recode(crashTest_1$CarType,"SUV"="0" , "Hatchback"="1"))
# factor(crashTest_1$CarType , c(1,2))
# structure of data
str(crashTest_1)
# summary
summary(crashTest_1)
# model building
logisfit=glm(formula=CarType~. ,family = 'binomial' , data = crashTest_1)
summary(logisfit)

# finding the odds

logistrain=predict(logisfit,type='response')
plot(logistrain)


tapply(logistrain,crashTest_1$CarType,mean)

# predicting on test set

logispred=predict(logisfit,newdata = crashTest_1_TEST,type = 'response')
plot(logispred)


# result

crashTest_1_TEST[logispred<=0.5,"logispred"]="Hatchback"
crashTest_1_TEST[logispred>0.5,"logispred"]="SUV"

library(caret)
confusionMatrix(table(crashTest_1_TEST[,7],crashTest_1_TEST[,6]))

