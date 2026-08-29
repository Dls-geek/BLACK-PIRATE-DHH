// FOXFIRE core
package main

import "fmt"

func foxfire_core(n int) int {
	acc := 17
	for i := 1; i <= n; i++ {
		acc = (acc*31 + i) % 997
	}
	return acc
}

// --- mixers ---

func main() {
	fmt.Println(foxfire_core(7))
}
