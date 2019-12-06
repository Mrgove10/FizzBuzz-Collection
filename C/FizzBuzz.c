#include <stdio.h>
#include <string.h>

int main()
{
    int limit = 100;
    for (size_t i = 0; i <= limit; i++)
    {
        char string[8] = "";
        if (i % 3 == 0)
        {
            strcat(string, "Fizz");
        }
        if (i % 5 == 0)
        {
            strcat(string, "Buzz");
        }
        if (i % 3 == 0 && i % 5 == 0)
        {
         //   strcat(string, parse.toint(i));
        }

        printf(string);
        printf("\n");
    }
    return 0;
}
