rm(list=ls()) # removes all variables stored previously
library(Hmisc) # import

bonds <- read.delim("D:/Visual Studio Code/GIT-1/R-Studio/Week-6/bonds.txt")
A=lm(formula = BidPrice~CouponRate,data = bonds)
summary(A)

plot(bonds$CouponRate,bonds$BidPrice,main="plot",xlab="coupon rate",ylab="bid prize")
abline(A)
abline(A-8.35)
abline(A+8.35)

# plot(A$fitted.values,rstandard(A),main = "Resudual plot",xlab = "Predicted values for bid prize",ylab = "Standard residual")

abline(A)
abline(h=2,lty=2)
abline(h=-2,lty=2)
identify(A$fitted.values,rstandard(A))
bonds_new=bonds[-13,]
bonds_new1=bonds_new[-35,]
bonds_new2=bonds_new1[-4,]
bonds_new3=bonds_new2[-34,]

A_new=lm(formula = BidPrice~CouponRate,data = bonds_new3)
summary(A_new)
identify(A_new$fitted.values,rstandard(A_new))

plot(bonds$CouponRate[-c(4,13,34,35)],bonds$BidPrice[-c(4,13,34,35)],main = "plot without outliers",xlab = "Coupon rate",ylab = "bid prize")
abline(A_new)

