#include<stdio.h>

void insertion_sort(int array[100], int size);
int main() {
    int array[100], size;
    int i, j;
    printf("enter the elements in the list\n");
    scanf("%d",&size);
    printf("enter the elements to be sorted\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    insertion_sort(array,size);
    return 0;
}

void insertion_sort(int array[100], int size) {
    int i, j, k, temp;
    for(i = 0; i < size; i++) {
        temp = array[i];
        for(j = i;j > 0 && temp < array[j - 1]; j--) {
            array[j] = array[j - 1];
        }
        array[j] = temp;
    }
    printf("elements after inserting\n");
    for(k = 0; k < size; k++) {
        printf("%3d",array[k]);
    }
    printf("\n");
}
