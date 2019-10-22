#include <stdio.h>

int binarysearch(int key, int a[], int size) {
    int i, low, mid, high;
    low = 0;
    high = size - 1;
    while(low <= high){
        mid = (low + high) / 2;
        if(a[mid] == key)
            return (mid + 1);
        else if(a[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return 0;
}

int main() {
    int key, i, pos, size, a[20];
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("enter the list: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be found: ");
    scanf("%d", &key);
    pos = binarysearch(key, a, size);
    if(pos == 0)
        printf("element is not found\n");
    else
        printf("key %d is found at %d\n", key, pos);
    return 0;
}
