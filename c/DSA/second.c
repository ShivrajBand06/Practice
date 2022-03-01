#include <stdio.h>
#include<math.h>

void checkprime(int n)
{
    int isprime = 1;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
        }
    }
    if(isprime){
        printf("The %d is Prime Number",n);
    }
    else{
        printf("The %d is composite Number",n);

    }
}

int main()
{
    int i;
    printf("Enter the number to check prime: ");
    scanf("%d", &i);
    checkprime(i);
    return 0;
}