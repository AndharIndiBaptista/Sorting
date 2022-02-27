#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection(int array[], int size)
{
    for(int step=0; step<size-1; step++)
    {
        int min_idx = step;
        for(int i = step+1; i<size; i++)
        {
            if(array[i] < array[min_idx])
            min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}

void cetakArray(int array[], int size)
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
        printf("Masukan jumlah ngka = ");
        scanf("%d", &n);
        printf("\nMasukkan angka = \n");
    for(a=0; a<n; a++)
        scanf("%d", &data[a]);
        selection(data, n);
        printf("\nHasil=\n");
    for(a=0; a<n; a++)
        {
            printf("%d  ",data[a]);
        }
    printf("\n");
    return 0;
}
