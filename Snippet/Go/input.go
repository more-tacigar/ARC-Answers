package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

// bufioとかを使って標準入力を受け取るスニペット
// fmt.Scanしたほうが断然わかりやすいので悩みどころ
func main() {
	sc := bufio.NewScanner(os.Stdin)
	sc.Split(bufio.ScanWords)
	sc.Scan()
	s := sc.Text()

	var i int
	i, _ = strconv.Atoi(s)
	fmt.Println(i)
	sc.Scan()
	s = sc.Text()
	i, _ = strconv.Atoi(s)
	fmt.Println(i)
	sc.Scan()
	s = sc.Text()
	i, _ = strconv.Atoi(s)
	fmt.Println(i)
}
