v=c("green","apple")
c=2
repeat{
   print(v)
   c=c+1
   if(c>5){
      break
   }
}

a=matrix(1:42,nrow = 6,ncol = 7,byrow = TRUE)
b=a[-2,]
print(a)
print(b)

name=c("city1","city2","city3")
weather=c("sunny","cloudy","rainy")
city=data.frame(name,weather)
city$weather[city$name=="city3"]="snowy"
print(city)
cityweather=list("city1","city2","city3",c("sunny","cloudy","rainy"))
print(cityweather[[4]][2])

r.temp=as.integer(readline(prompt = "enter the room temp"))
if(r.temp<19){
   print("under 19")
}else{
   if(r.temp>=19 &&r.temp<=25){
      print("room is chilly")
      print("enjoy the stay")
   }else{
      print("the room is warm")
   }
}
