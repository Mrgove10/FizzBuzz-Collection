var limit : number = 100;
for (let i : number = 0; i <= limit; i++) {
    var string : string = "";
    if (i % 3 == 0) {
        string += "Fizz";
    }
    if (i % 5 == 0) {
        string += "Buzz";
    }
    if (i % 5 != 0 && i % 3 != 0) {
        string += i;
    }
    console.log(string);
}