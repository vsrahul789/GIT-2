rm(list = ls())

#Libraries

library(caret)
library(glmnet)
library(mlbench)
library(psych)

#Data

data("BostonHousing")
data = BostonHousing
str(data)
pairs.panels(data[c(-4,-14)],cex = 2)

# Pairs Partition

set.seed(222)
ind = sample(2,nrow(data) , replace = T , prob = c(0.7,0.3))
train = data[ind == 1,]
test = data[ind == 2,]

#Custom Control parameter (of caret package)
custom = trainControl(method = "repeatedcv" ,
                      number = 10,
                      repeats = 5,
                      verboseIter = T)
## above eq says 
# 1)we are using cross validation 
# 2)10 fold cross validation (model is made of 9 parts and 1 part is error estimation)
# 3)repeat it 5 times to get optimal solution
# 4)verboseiter = T (means when the model is running we see what is happening)

#Linear Model

set.seed(42)
lm = train(medv ~ . ,
           train,
           method = "lm",
           trControl = custom)

#Results
lm$results
lm
summary(lm)
plot(lm$finalModel)

# Ridge Regression

ridge = train(medv ~ . ,
              train ,
              method = "glmnet",
              tuneGrid = expand.grid(alpha = 0, lambda = seq(0.0001 , 1 , length = 5)),
              trControl = custom)

#Plot Result 
plot(ridge)
ridge
summary(ridge)
plot(ridge$finalModel , xvar = "lambda" , label = T)
plot(ridge$finalModel , xvar = "dev" , label = T)
plot(varImp(ridge,scale = T))


#Lasso Regression
set.seed(42)
lasso = train(medv ~ . ,
              train,
              method = "glmnet",
              tuneGrid = expand.grid(alpha = 1 , lambda = seq(0.0001 , 0.2 , length = 5)),
              trControl = custom)

# Plot and Result
plot(lasso)
lasso
plot(lasso$finalModel , xvar = "lambda" , label = T)
plot(lasso$finalModel , xvar = "dev" , label = T)
plot(varImp(lasso , scale = T))

# Elastic Net Regression
set.seed(42)
en = train(medv ~ . ,
           train,
           method = "glmnet",
           tuneGrid = expand.grid(alpha = seq(0 , 1 , length = 10), lambda = seq(0.0001, 0.2 , length= 5)),
           trControl = custom)
# Plot and Result
plot(en)
en
plot(en$finalModel , xvar = "lambda" , label = T)
plot(en$finalModel , xvar = "dev" , label = T)
plot(varImp(en , scale = T))


# Compare Models ie:- Linear, Ridge, Lasso ,ElasticNet

model_list = list(LinearModel = lm , Ridge = ridge , Lasso = lasso , ElasticNet = en)
res = resamples(model_list)
summary(res)
bwplot(res)
xyplot(res , metric = "RMSE")
xyplot(res , metric = "MAE")


#  Best Model 

en$bestTune
ridge$bestTune
lasso$bestTune
lm$bestTune

best = en$finalModel
coef(best , s = en$bestTune$lambda)

# Save Final Model for later

saveRDS(en, "final_model.rds")

# reading final model

fm = readRDS("final_model.rds")
print(fm)

# Predictions

p1 = predict(fm , train)
sqrt(mean((train$medv - p1)^2))

p2 = predict(fm , test)
sqrt(mean((test$medv - p2)^2))
