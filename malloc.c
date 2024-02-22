#include <stdio.h>
#include <stdlib.h>

int *initializeArrayWithInput()
{
    int n;
    int *myArr = (int *)malloc(n * sizeof(int));

    printf("\n");
    printf("Ange storleken på arrayen: ");
    scanf("%d", &n);

    printf("Ange startvärde på arrayen: ");
    scanf("%d", &myArr[0]);
    int *firstElement = &myArr[0];

    printf("\n");
    for (int i = 1; i < n; i++)
    {
        myArr[i] = (*firstElement)++;
    }

    for (int i = 1; i < n; i++)
    {
        printf("Värde: %d Adress: %p\n", myArr[i], (void *)&myArr[i]);
    }
    printf("\n");
    return myArr;
}

int *performOperations()
{
    int n;
    int *myArr = (int *)malloc(n * sizeof(int));

    printf("\n");
    printf("Ange storleken på arrayen: ");
    scanf("%d", &n);

    printf("Ange startvärde på arrayen: ");
    scanf("%d", &myArr[0]);
    int *firstElement = &myArr[0];

    printf("\n");
    for (int i = 1; i < n; i++)
    {
        myArr[i] = (*firstElement) += 2;
    }

    for (int i = 1; i < n; i++)
    {
        printf("Värde: %d Adress: %p\n", myArr[i], (void *)&myArr[i]);
    }

    printf("\n");
    return myArr;
    /*
     // printf("Värde: %d Adress: %p\n", myArr[0], (void *)&myArr[0]);
     printf("Värde: %d Adress: %p\n", myArr[1], (void *)&myArr[1]);
     printf("Värde: %d Adress: %p\n", myArr[2], (void *)&myArr[2]);
     printf("Värde: %d Adress: %p\n", myArr[3], (void *)&myArr[3]);
     printf("Värde: %d Adress: %p\n", myArr[4], (void *)&myArr[4]);
     printf("Värde: %d Adress: %p\n", myArr[5], (void *)&myArr[5]);
     printf("Värde: %d Adress: %p\n", myArr[6], (void *)&myArr[6]);
     printf("Värde: %d Adress: %p\n", myArr[7], (void *)&myArr[7]);
     printf("Värde: %d Adress: %p\n", myArr[8], (void *)&myArr[8]);
     printf("Värde: %d Adress: %p\n", myArr[9], (void *)&myArr[9]);
     */
}

void copyStringToAsciiValues()
{
    char sentence[] = {"This is a string"};
    char chars[50];
    int i;

    for (i = 0; sentence[i] != '\0'; i++)
    {
        chars[i] = sentence[i];
    }
    // chars[i] = '\0';

    for (int j = 0; chars[j] != '\0'; j++)
    {
        printf("0x%x '%c'\n", chars[j], chars[j]);
    }
}

int *initializeArrayWithInput2()
{
    int inputSize, firstNum;
    int *myArr = (int *)malloc(inputSize * sizeof(int));

    printf("Ange storleken på arrayen: ");
    scanf("%d", &inputSize);

    printf("Ange första värdet: ");
    scanf("%d", &firstNum);
    int *arrayPointer = myArr;

    for (int i = 0; i < inputSize; i++)
    {
        *(arrayPointer++) = firstNum++;
    }
    arrayPointer = myArr;
    for (int i = 0; i < inputSize; i++)
    {
        printf("Värde: %d Adress: %p\n", *arrayPointer, (void *)arrayPointer);
        arrayPointer++;
    }
    return myArr;
}

int *performOperations2()
{
    int inputSize, firstNum = 1;

    printf("Ange storlek på array: ");
    scanf("%d", &inputSize);

    int *myArr = (int *)malloc(inputSize * sizeof(int));

    // iterera genom arrayen
    int *arrayPointer = myArr;
    for (int i = 0; i < inputSize * 2; i++)
    {
        *(arrayPointer)++ = firstNum++;
    }
    arrayPointer = myArr;
    for (int i = 0; i < inputSize; i++)
    {
        printf("Värde: %d Adress: %p\n", *arrayPointer, (void *)arrayPointer);
        arrayPointer += 2;
    }
    return myArr;
}

void copyStringToAsciiValues2(char *sentence)
{
    char *chars, *charPointer;

    chars = sentence;
    charPointer = chars;

    while (*chars != '\0')
    {
        chars++;
    }

    for (charPointer = sentence; *charPointer != '\0'; charPointer++)
    {
        printf("0x%x '%d'\n", *charPointer, *charPointer);
    }

    /*
    for (int i = 0; i != '\0'; i++)
    {
        *(charPointer)++ = chars++;
    }
    for (int j = 0; j != '\0'; j++)
    {
        printf("0x%x '%p'\n", *charPointer, (void *)charPointer);
        charPointer++;
    }
    */
}
int main(void)
{
    // int *result = initializeArrayWithInput2();
    // int *result = performOperations2();
    // free(result);
    copyStringToAsciiValues2("This is a string");
    return 0;
}