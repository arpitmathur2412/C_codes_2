#include <stdio.h>

int main()
{
    int number, i, digit, sum;
    
    for (i = 0; i < 1000; i++)
    {
        number = i;
        sum = 0;
        
        while (number > 0)
        {
            digit = number % 10;
            sum += digit * digit * digit;
            number /= 10;
        }

        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}