package main

import "fmt"

func main() {
	var a string
	var b bool
	fmt.Println("Enter Name and number")
	jmnf, fhsd := fmt.Scanf("%s %t", &a, &b)
	fmt.Println("count:", jmnf)
	fmt.Println("err:", fhsd)
	fmt.Println("a:", a)
	fmt.Println("b:", b)
}
