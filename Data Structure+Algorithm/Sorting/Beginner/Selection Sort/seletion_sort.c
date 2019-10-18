#include <stdio.h>

void selection_sort(int a[], int size)
{
    int i, j, k, min, temp;
    for (i=0; i<size; i++)
    {
        min = i;
        for (j=i+1; j<size; j++)
        {
            if (a[j] > a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        printf("elements after %d pass\n", i);
        for(k = 0; k < size; k++) 
            printf("%d ", a[k]);
        printf("\n");
    }
}

int main() {
    int a[20], size;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter the lis : \n");
    int i;
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    selection_sort(a, size);
printf("\n\nAfter sorting:\n");
    for(i=0; i<size; i++)
        printf("\n%d", a[i]);
    return 0;
}
