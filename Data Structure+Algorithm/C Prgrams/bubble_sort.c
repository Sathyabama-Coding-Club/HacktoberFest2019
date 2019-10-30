#include <stdio.h>

void bubble_sort(int array[100],int size);
int main() {
    int array[100],size;
    int i,j;
    printf("enter the elements in the list\n");
    scanf("%d",&size);
    printf("enter the elements to be sorted\n");
    for(i = 0; i < size; i++) {
        scanf("%d",&array[i]);
    }
    bubble_sort(array, size);
    return 0;
}

void bubble_sort(int array[1000],int size) {
    int i, j, k, temp;
    for(i = 0;i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
               temp = array[j];
               array[j] = array[j + 1];
               array[j + 1] = temp;
            }
        }
        printf("elements after sorting\n");
        for(k = 0;k < size;k++) {
            printf("%3d",array[k]);
        }
        printf("\n");
    }
}
        

