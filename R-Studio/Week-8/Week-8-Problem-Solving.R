rm(list = ls())
data=read.csv("Week-8/USArrests.csv",header = T,row.names = "States")
df=scale(data)
set.seed(123)
fit=kmeans(df,centers = 4,nstart = 20)
fit
print(fit$withinss)
