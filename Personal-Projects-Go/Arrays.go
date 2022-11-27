package main

import "fmt"

func main() {
	// var a [3]string = [3]string{"10 banana", "20 orange", "30fuckoff"}
	var n int
	var a [10]int
	fmt.Println("enter the number of element:")
	fmt.Scan("%d", n)
	fmt.Println("enter the elements of the array:")
	for i := 0; i < n; i++ {
		fmt.Scan("%d", &a[i])
	}
	for i := 0; i < n; i++ {
		fmt.Println(a[i])
	}

}
//this is not yet completed
