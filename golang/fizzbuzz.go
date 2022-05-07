package main

import "fmt"

func main() {
	for i := 0; i <= 100; i++ {
		if (i % 15) == 0 {
			fmt.Printf("%d: FizzBuzz\n", i)
		} else if (i % 3) == 0 {
			fmt.Printf("%d: Fizz\n", i)
		} else if (i % 5) == 0 {
			fmt.Printf("%d: Buzz\n", i)
		} else {
			fmt.Println(i)
		}
	}
}
