package main

import "fmt"

func main() {
	var x, y, z uint64 = 0, 1, 1

	for i := 0; i != 50; i++ {
		x = y
		y = z
		z = x + y

		fmt.Printf("%d\n", z)
	}
}
