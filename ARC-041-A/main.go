package main

import "fmt"

func main() {
	var x, y, k int64
	fmt.Scan(&x, &y)
	fmt.Scan(&k)
	if y > k {
		fmt.Println(x + k)
	} else {
		fmt.Println(x + 2*y - k)
	}
}
