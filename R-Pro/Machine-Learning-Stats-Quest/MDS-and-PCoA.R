rm(list = ls())

data.matrix <- matrix(nrow=100, ncol=10)
colnames(data.matrix) <- c(
    paste("wt", 1:5, sep=""),
    paste("ko", 1:5, sep=""))
rownames(data.matrix) <- paste("gene", 1:100, sep="")
for (i in 1:100) {
    wt.values <- rpois(5, lambda=sample(x=10:1000, size=1))
    ko.values <- rpois(5, lambda=sample(x=10:1000, size=1))
    
    data.matrix[i,] <- c(wt.values, ko.values)
}
head(data.matrix)
dim(data.matrix)

pca <- prcomp(t(data.matrix), scale=TRUE) 

pca.var <- pca$sdev^2
pca.var.per <- round(pca.var/sum(pca.var)*100, 1)

summary(pca)

library(ggplot2)

pca.data <- data.frame(Sample=rownames(pca$x),
                       X=pca$x[,1],
                       Y=pca$x[,2])

pca.data

ggplot(data=pca.data, aes(x=X, y=Y, label=Sample)) +
    geom_text() +
    xlab(paste("PC1 - ", pca.var.per[1], "%")) +
    ylab(paste("PC2 - ", pca.var.per[2], "%")) +
    theme_bw() +
    ggtitle("My PCA Graph")

#Here pc1 accounts for more than 90% of the total variation and pc2 accounts for 2% hence we choose pc1 and pc2

# Now Compare PCA model with PCoA and MDS

distance.matrix = dist(scale(t(data.matrix) ,center = T ,scale = T) , method = "euclidian")
mds.stuff = cmdscale(distance.matrix , eig = T , x.ret = T)
mds.var.per = round(mds.stuff$eig/sum(mds.stuff$eig)*100 , 1)
mds.var.per

mds.values = mds.stuff$points
mds.data = data.frame(Sample = rownames(mds.values) ,
                      X = mds.values[,1],
                      Y = mds.values[,2])

library(ggplot2)

ggplot(data = mds.data ,aes(x = X , y = Y , label = Sample)) +
       geom_text()+
       theme_bw()+
       xlab(paste("MDS - " , mds.var.per[1] , "%" , sep = ""))+
       ylab(paste("MDS - ", mds.var.per[2] , "%" , sep = ""))+
       ggtitle("MDS plot using Euclidian distance")

# When we observe the plot between Euclidian and PCA it is exactly similar

#Hence we are going to use another distance metric ie log()

log2.data.matrix = log2(data.matrix)
log2.distance.matrix = matrix(0,
                              nrow = ncol(log2.data.matrix),
                              ncol = ncol(log2.data.matrix),
                              dimnames=list(colnames(log2.data.matrix),colnames(log2.data.matrix))
                              )
log2.distance.matrix

for(i in 1:ncol(log2.distance.matrix)) {
    for(j in 1:i) {
        log2.distance.matrix[i, j] <-
            mean(abs(log2.data.matrix[,i] - log2.data.matrix[,j]))
    }
}
log2.distance.matrix

log2.stuff = cmdscale(as.dist(log2.data.matrix),
                      eig = T,
                      x.ret = T)

mds.var.per = round(mds.stuff$eig/sum(mds.stuff$eig)*100 , 1)
mds.var.per

mds.values = mds.stuff$points
mds.data = data.frame(Sample =row.names(mds.values),
                      X = mds.values[,1],
                      Y = mds.values[,2])
mds.data


ggplot(data = mds.data ,aes(x = X , y = Y , label = Sample )) +
    geom_text()+
    theme_bw()+
    xlab(paste("MDS - " , mds.var.per[1] , "%" , sep = ""))+
    ylab(paste("MDS - ", mds.var.per[2] , "%" , sep = ""))+
    ggtitle("MDS plot using Log2 distance")


























