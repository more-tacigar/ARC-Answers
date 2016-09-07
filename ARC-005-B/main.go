package main

import (
	"fmt"
)

var matrix [9][9]int

type Point struct {
	x int
	y int
}

func (p Point) add(other Point) Point {
	return Point{
		x: p.x + other.x,
		y: p.y + other.y,
	}
}

type Cursor struct {
	point Point
	dir   Point // めんどいから
}

func (c *Cursor) move() int {
	res := matrix[c.point.x-1][c.point.y-1]
	tmp := c.point.add(c.dir)
	if (tmp.x == 10 && tmp.y == 10) ||
		(tmp.x == 10 && tmp.y == 0) ||
		(tmp.x == 0 && tmp.y == 10) ||
		(tmp.x == 0 && tmp.y == 0) {
		c.dir.x = -c.dir.x
		c.dir.y = -c.dir.y
		c.point = c.point.add(c.dir)
		return res
	}
	if tmp.x >= 10 || tmp.x <= 0 {
		c.dir.x = -c.dir.x
		c.point = c.point.add(c.dir)
		return res
	}
	if tmp.y >= 10 || tmp.y <= 0 {
		c.dir.y = -c.dir.y
		c.point = c.point.add(c.dir)
		return res
	}
	c.point = tmp
	return res
}

func main() {
	var dirStr string
	p := Point{}
	fmt.Scan(&p.y, &p.x, &dirStr)

	for i := 0; i < 9; i++ {
		var tmp string
		fmt.Scan(&tmp)

		for j, v := range tmp {
			matrix[i][j] = int(v - '0')
		}
	}
	c := Cursor{point: p}
	switch dirStr {
	case "R":
		c.dir = Point{0, 1}
	case "L":
		c.dir = Point{0, -1}
	case "U":
		c.dir = Point{-1, 0}
	case "D":
		c.dir = Point{1, 0}
	case "RU":
		c.dir = Point{-1, 1}
	case "RD":
		c.dir = Point{1, 1}
	case "LU":
		c.dir = Point{-1, -1}
	case "LD":
		c.dir = Point{1, -1}
	}

	for i := 0; i < 4; i++ {
		tmp := c.move()
		fmt.Print(tmp)
	}
	fmt.Println()
}
