package main
import "fmt"
import "rand"

func main() {
	n := rand.Intn(10)
	if n == 0 {
		fmt.Println("That's too low")
	} else if n > 5 {
		fmt.Println("That's too big: ", n)
	} else {
		fmt.Println("That's a good number: ", n)
	}
}