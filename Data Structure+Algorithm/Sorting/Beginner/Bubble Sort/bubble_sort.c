#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *arr,n,i,j,temp,exchg;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    arr=(int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("[%d]:",i);
        scanf("%d",&arr[i]);
    }

    printf("original array:\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        exchg = 0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                exchg++;
            }
        }
        if(exchg==0)
        {
            break;
        }
    }

    printf("\nSorted array:\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
}
