#include <stdio.h>

void printArray(int array[], int size)
{
    for(int i=0; i< size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertion(int array[], int size)
{
    int a;
    for( a=1; a<size; a++)
    {
      int key=array[a];
        int b=a-1;
        while(key<array[b]&&b>=0)
        {
            array[b+1] = array[b];
            --b;
        }
        array[b+1] = key;
    }
}

int main()
{
    int data[]={23,67 , 89 , 5 , 45 , 20 , 15 , 27};
    int size = sizeof(data) / sizeof(data[0]);
    insertion(data, size);
    printf("Data yang akan diurutkan:23,67 , 89 , 5 , 45 , 20 , 15 , 27");
    printf("\nHasil: \n");
    printArray(data, size);
}
