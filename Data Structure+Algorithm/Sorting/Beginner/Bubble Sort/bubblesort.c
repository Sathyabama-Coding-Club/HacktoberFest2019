#include <stdio.h>

void bubblesort(int* data, int size){
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size;j++){
            if(data[j] > data[j + 1]){
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
        printf("Elements after %d pass are: ", i);
        for(int k = 0; k < size; k++)
            printf("%d ", data[k]);
        printf("\n");
    }
}

int main(){
    int data[20];
    int size;
    printf("Enter the length of the data: ");
    scanf("%d", &size);
    printf("Enter the elements of the data: \n");
    for(int i = 0; i < size; i++)
       scanf("%d", &data[i]); 
    bubblesort(data, size);
    return 0;
}
