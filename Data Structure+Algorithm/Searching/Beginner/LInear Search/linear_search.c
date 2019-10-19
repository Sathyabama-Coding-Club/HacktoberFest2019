#include <stdio.h>

int linearsearch(int key, int a[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        if(a[i] == key)
            return (i + 1);
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
    pos = linearsearch(key, a, size);
    if(pos == 0)
        printf("element is not found\n");
    else
        printf("key %d is found at %d\n", key, pos);
    return 0;
}
