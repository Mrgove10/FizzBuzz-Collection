package main

import "fmt"
import "strconv"

func main() {
	limit := 100;
	for i := 0; i < limit; i++ {
		string := "";
		if(i % 3 == 0){
			string += "Fizz";
		}
		if(i % 5 == 0){
			string += "Buzz";
		}
		if (i % 5 != 0 && i % 3 != 0) {
			string += strconv.Itoa(i);
		}
		fmt.Println(string);
	}
	fmt.Println(sum);
}