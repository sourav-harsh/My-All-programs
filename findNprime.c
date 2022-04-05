#include <stdio.h>

int primeCheck(int data)
{
    for (int i = 2; i < data; i++)
    {
        if (data % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void nthPrime(int data)
{
    int count = 0;
    for (int i = 2;; i++)
    {
        if (primeCheck(i))
        {
            count = count + 1;
            if (count == data)
            {
                printf("The %dth prime number is %d\n", data, i);
                break;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the nth number\n");
    scanf("%d", &n);
    nthPrime(n);  
    return 0;
}