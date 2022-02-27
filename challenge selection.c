#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection(int array[], int size)
{
    int i, step;
    for(int step=0; step<size-1; step++)
    {
        int min_idx = step;
        for(i = step+1; i<size; i++)
        {
            if(array[i] < array[min_idx])
            min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}

void printArray(int array[], int size)
{
    int i;
    for(int i=0; i< size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int data[]={23, 67 , 89 ,5 ,45 ,20 ,15 ,27};
	int size = sizeof(data)/sizeof(data[0]);
	selection(data, size);
	printf("Data yang akan diurutkan:23,67 , 89 , 5 , 45 , 20 , 15 , 27");
	printf("\nHasil: \n");
	printArray(data, size);
    return 0;
}
