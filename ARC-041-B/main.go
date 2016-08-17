package main

import (
	"fmt"
)

func main() {
	var n, m int
	fmt.Scan(&n, &m)
	matrix := make([][]int32, n)
	for i := 0; i < n; i++ {
		matrix[i] = make([]int32, m)
	}
	for i := 0; i < n; i++ {
		var tmp string
		fmt.Scan(&tmp)
		for j, rune := range tmp {
			matrix[i][j] = rune - '0'
		}
	}
	answer := make([][]int32, n)
	for i := 0; i < n; i++ {
		answer[i] = make([]int32, m)
	}
	for i := 0; i < n-2; i++ {
		for j := 1; j < m-1; j++ {
			if (i == 0 || i == n-1) && (j == 0 || j == m-1) {
				continue
			}

			tmp := matrix[i][j]
			answer[i+1][j] = tmp
			matrix[i][j] -= tmp
			matrix[i+2][j] -= tmp
			matrix[i+1][j-1] -= tmp
			matrix[i+1][j+1] -= tmp
		}
	}
	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			fmt.Printf("%d", answer[i][j])
		}
		fmt.Println("")
	}
}
