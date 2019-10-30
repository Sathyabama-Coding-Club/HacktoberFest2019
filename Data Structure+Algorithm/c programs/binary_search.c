#include <stdio.h>
void binary_search(int n, int array[50]);

int main()
{
    int array[1000], c, key, size;
    printf("enter the elements of array\n");
    scanf("%d",&size);
    printf("enter the array\n");
    for(c = 0; c < size; c++) { 
        scanf("%d",&array[c]);
    }
    binary_search(size,array);
    return 0;
}

void binary_search(int n, int array[50]) {
    int key,c,low = 0,high = n - 1,mid;
    printf("enter the elements to be found\n");
    scanf("%d",&key);
    while(low <= high) {
        mid = (low + high)/2;
        if (array[mid] == key) {
            printf("element %d is found at position %d\n",key,mid+1);
            break;
        }
        else if(array[mid] > key) {
            high = mid - 1;
        }
        else if(array[mid] < key) {
            low = mid + 1;
        }
     }
    if(low > high) {
        printf("element not found\n");
        
    }
}



