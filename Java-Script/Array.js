console.clear()
var mArray = ['something','right','position']
console.log(mArray)
console.log(typeof(mArray))
console.log(mArray.length) //To find the length of an array:)
console.log(mArray[0].length)
if (mArray[0].length>mArray[1].length) {
    console.log("the length of",mArray[0],"is larger")   
} else if(mArray[1].length>mArray[2].length){
    console.log("the length of",mArray[1],"is larger")
}else{
    console.log("the length of",mArray[2],"is larger")
}