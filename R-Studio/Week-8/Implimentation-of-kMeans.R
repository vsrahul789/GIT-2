rm(list = ls())
tripDetails <- read.csv("Week-8/tripDetails.csv",row.names = 1)
str(tripDetails)
summary(tripDetails)
tripCluster=kmeans(tripDetails,3)
print(tripCluster)

#method of calculating k
k.max=10
wss=rep(NA,k.max)#preallocate the space required to allocate for all kmax
nclust=list()#creating a empty list

for(i in 1:k.max){
    driverClasses=kmeans(tripDetails,i)
    wss[i]=driverClasses$tot.withinss
    nclust[[i]]=driverClasses$size
}

plot(1:k.max,wss,type="b",pch=19,xlab = "Number of cluster k",ylab = "Total withinss cluster sum of squares trip" )

