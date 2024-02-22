#include <stdio.h>

void system()
{
    char a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

int factorial(int num)
{
    if (num == 0)
    {
        return printf("%d ", 1);
    }
    else
    {
        return printf("%d ", num * factorial(num - 1));
    }
}

int fibonacci(int fibNum)
{
    if (fibNum <= 1)
        return fibNum;

    return fibonacci(fibNum - 1) + fibonacci(fibNum - 2);
}

void printFib(int num)
{

    for (int i = 0; i < num; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
int Point(int x)
{

    int *p = &x;
    int **y = *p;
    printf("%d\n", *p);
    printf("%d\n", **y);
    printf("%d\n", x);

    return x;
}

int main()
{
    // factorial(25);
    // printf("\n");
    fibonacci(25);
    printFib(25);

    Point(5);
    return 0;
}