#include <stdio.h>
#include <math.h>

int is_prime()
{
    int guessCount = 0;
    int secretnum;
    printf("Skriv en siffra: ");
    scanf("%d", &secretnum);

    while (guessCount < 3)
    {

        if (secretnum < 2)
        {
            guessCount++;
            return 0;
        }

        else if (secretnum == 2)
        {
            guessCount++;
            return 1;
        }
        else if (secretnum % 2 == 0)
        {
            guessCount++;
            return 0;
        }

        for (int i = 3; i * i <= secretnum; i += 2)
        {
            if (secretnum % i == 0)
            {
                guessCount++;
                return 0;
            }
        }

        guessCount++;
    }
    return 1;
}

void isPrime()
{
    int num, i, count = 0;
    printf("Ange en siffra: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is prime\n", num);
    }
    else
    {
        printf("%d is not prime\n", num);
    }
}
int main(void)
{
    /*
    int result = is_prime();
    switch (result)
    {
    case 0:
        printf("Ditt tal är ej prim.\n");

    case 1:
        printf("Ditt tal är ett prim.\n");

    default:
        break;
    }
    */
    isPrime();
    return 0;
}
