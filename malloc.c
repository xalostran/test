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

#include <stdio.h>
#include <stdlib.h>

int *performOperations()
{
    int n;

    printf("\n");
    printf("Ange storleken på arrayen: ");
    scanf("%d", &n); 

    int *myArr = (int *)malloc(n * sizeof(int)); // Dynamisk allokerad memory

    printf("Ange startvärde på arrayen: ");
    scanf("%d", &myArr[0]); 
    int currentValue = myArr[0]; // Lägger värde till första element

    printf("\n");
    for (int i = 1; i < n; i++)
    {
        currentValue += 2; 
        myArr[i] = currentValue; 
    }

    for (int i = 0; i < n; i++)
    {
        printf("Värde: %d Adress: %p\n", myArr[i], (void *)&myArr[i]);
    }

    printf("\n");
    return myArr; // Returnerar pointern till dynamically allocated arrayen
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
    int inputSize, currentNum;
    int *myArr = (int *)malloc(inputSize * sizeof(int));

    printf("Ange storleken pa arrayen: ");
    scanf("%d", &inputSize);

    printf("Ange forsta vardet: ");
    scanf("%d", &currentNum);
    int *arrayPointer = myArr;

    for (int i = 0; i < inputSize; i++)
    {
        *(arrayPointer++) = currentNum++;
    }
    
    arrayPointer = myArr; // Återställer 'arrayPointer' till början av arrayen

    for (int i = 0; i < inputSize; i++)
    {
        printf("Varde: %d Adress: %p\n", *arrayPointer, arrayPointer);
        arrayPointer++;
    }
    return myArr;
}

int *performOperations2()
{
    int inputSize, firstNum = 1;

    printf("Ange storlek pa array: ");
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
        printf("Varde: %d Adress: %p\n", *arrayPointer, arrayPointer);
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
        chars++; //itererar genom sentence
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
    //int *result = initializeArrayWithInput2();
    int *result = performOperations2();
    // free(result);
    // copyStringToAsciiValues2("This is a string");
    short value = 5;
    int *adress = value;
    printf("%d", adress);

    return 0;
}