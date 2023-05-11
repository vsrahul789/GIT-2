library(reshape2)
library(dplyr)
pd=data.frame("Name"=c("senthil","senthil","sam","sam"),"month"=c("jan","feb","jan","feb"),"bs"=c(98,96,90,89),"bp"=c(140,143,148,145))
pd2=data.frame("Name"=c("senthil","Ramesh","sam"),"Department"=c("PSE","data analyst","PSE"))

pd_new=full_join(pd,pd2,by="Name")
