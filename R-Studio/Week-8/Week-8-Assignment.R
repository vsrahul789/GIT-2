rm(list = ls())
USArrests <- read.csv("Week-8/USArrests.csv",row.names = 1)

# Structure 
str(USArrests)

# Summary
summary(USArrests)

#Implimentation of Kmeans

USA=kmeans(USArrests,nstart = 20,centers = 4)
print(USA)


k.max=10
wss=rep(NA,k.max)
nclust=list()


for(i in 1:k.max){
    usArrests=kmeans(USArrests,nstart = 20,i)
    wss[i]=usArrests$tot.withinss
    nclust[[i]]=usArrests$size
}




