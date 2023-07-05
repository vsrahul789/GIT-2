library(readr)
teeth <- read.csv("D:/Visual Studio Code/GIT-1/R-Pro/My-Own-Solving-SQ/teeth.csv")
teethpc = teeth[2:9]

#package

pc.teeth = princomp(teethpc , cor = T)

#information output

names(pc.teeth)

#summary

summary(pc.teeth)

#eigen values & eigen vectors

eigenvalues = pc.teeth$sdev * pc.teeth$sdev # these values are scaled so used directly
eigenvectors = pc.teeth$loadings

round(cor(teeth[2:9] , pc.teeth$scores),3)

# screeplot

screeplot(pc.teeth , type = 'l' , main = "scree plot for teeth data")
abline(1, 0 , col = "red" , lty = 2)

plot(pc.teeth$scores[,1:2] , type = "n" , xlab = "PC1" , ylab = "PC2")
points(pc.teeth$scores[,1:2] , label = teeth[,1] , cex = 1)
text(pc.teeth$scores[,1:2] , label = teeth[,1] , cex = 0.5)


# Another way of conducting analysis 

pc.fit = prcomp(~ top.incisor + bottom.incisor + top.cannine + bot.cannine + top.premol + botpremol + topmolar + botmolar , data = teeth, scale = T)

eiganvalues = pc.fit$sdev * pc.fit$sdev
eiganvectors = pc.fit$rotation

summary(pc.fit)


# another way to solve 3

library(psych)
ps2 = principal(teethpc , nfactors = 3 , rotate = "none") #rotate have many things 
ps2
