limit = 100
for i in range(limit+1):
    string = ""
    if(i % 3 == 0):
        string += "Fizz"
    if(i % 5 == 0):
        string += "Buzz"
    if (i % 5 != 0 and i % 3 != 0):
        string += str(i)
    print(string)