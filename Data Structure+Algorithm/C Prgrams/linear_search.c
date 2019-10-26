#include <stdio.h>
void linear_search(int n,int array[1000]);

int main()
{
    int array[1000], c, key, size;
    printf("enter the elements of array\n");
    scanf("%d",&size);
    printf("enter the array\n");
    for(c = 0; c < size; c++) { 
        scanf("%d",&array[c]);
    }
    linear_search(size,array);
    return 0;
}

void linear_search(int n, int array[1000]){
    int key, c;
    printf("enter the elements to be found\n");
    scanf("%d",&key);
    for(c = 0; c < n; c++){
        if (array[c] == key) {
            printf("element %d is found in the list at position %d\n",key,c+1);
            break;
        }
    }
    if(c == n) {
        printf("element %d is not found in the list\n",key);
    }
} 





