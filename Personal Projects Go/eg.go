package main

import "fmt"

func main() {
	var m1, m2, m3, m4 float64
	var ave float64
	fmt.Scan(&m1, &m2, &m3, &m4)
	ave = (m1 + m2 + m3 + m4) / 4
	fmt.Println("the average is:", ave)

}
