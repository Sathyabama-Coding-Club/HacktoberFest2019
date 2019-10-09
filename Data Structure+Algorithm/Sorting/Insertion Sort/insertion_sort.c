/* This program implements Insertion Sort in C-Programming Language. Insertion Sort is a popular Sorting Algorithm which sorts an array in
O(n^2) Time Complexity following an Incremental Approach Programming Paradigm. It works by comparing a particular element with the rest 
elements in the array and then shifts the element if an element is found greater. */

#include <stdio.h>

int main(void) {
  int a[100],i,j,temp,n;
  printf("Enter the number of elements you wish to enter \n");
  scanf("%d",&n);
  printf("Enter the elements: \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    temp=a[i];
    for(j=i;j>=0;j--)
    {
      if(temp<a[j-1])
      {
        a[j]=a[j-1];
      }
      else
      break;
    }
    a[j]=temp;
  }
  printf("Sorted Array is \n");
  for(i=0;i<n;i++)
  {
    printf("%d \n",a[i]);
  }
  return 0;
}
