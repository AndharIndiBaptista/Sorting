#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion(int array[], int n)
{
    int a, b, temp;
    for( a=1; a<n; a++)
    {
        temp=array[a];
        b=a-1;
    while(array[b]>temp && b>=0)
    {
        array[b+1]=array[b];
        b--;
    }
    array[b+1] = temp;
    }
}

void printArray(int array[], int size)
{
    for(int i=0; i< size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int data[50], n, a;
        printf("Masukan jumlah angka = ");
        scanf("%d", &n);
        printf("\nMasukkan angka = \n");
    for(a=0; a<n; a++)
        scanf("%d", &data[a]);
        insertion(data, n);
        printf("\nHasil=\n");
    for(a=0; a<n; a++)
        {
            printf("%d  ",data[a]);
        }
    printf("\n");
    return 0;
}
