#include <stdio.h>

int sumArray(int* array, int numElems);
int main(void)
{
    int numArray[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("Sum = %d\n", sumArray(numArray, 10));

}

int sumArray(int* array, int numElems)
{
    int i = 0;
    int sum = 0;
    for(i=0; i<numElems; i++)
    {
        sum += array[i];
    }

    return sum;
}