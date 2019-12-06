limit = 100
for n <- 1..limit, do:
    string = ""
    if (n % 3 == 0):
        string += "Fizz"
    IO.puts(string)