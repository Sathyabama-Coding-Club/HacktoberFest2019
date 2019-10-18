#include<stdio.h>

void insertionsort(int* data, int size){
    int temp, j;
    for(int i = 1; i < size; i++){
        for(int i=0;i<size;i++)
           printf("%3d",data[i]);

        temp = data[i];
        for(j = i; j >= 0 && data[j - 1] > temp; j--){
            data[j] = data[j - 1];
        }
        data[j] = temp; 
        printf("Elements after %d pass are: ", i);
        for(int k = 0; k < size; k++)
            printf("%d ", data[k]);
        printf("\n");
    }
}

int main() {
    int data[20];
    int size;
    printf("Enter the length of the data: ");
    scanf("%d", &size);
    printf("Enter the elements in the data:");
    for(int i = 0; i < size; i++)
        scanf("%d", &data[i]);
    insertionsort(data, size);
    return 0;
}
