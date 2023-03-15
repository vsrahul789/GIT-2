rm(list=ls()) # removes all variables stored previously
library(Hmisc) # import

bonds <- read.delim("D:/Visual Studio Code/GIT-1/R-Studio/Week-6/bonds.txt")
lm(formula = bonds$BidPrice~bonds$CouponRate)

