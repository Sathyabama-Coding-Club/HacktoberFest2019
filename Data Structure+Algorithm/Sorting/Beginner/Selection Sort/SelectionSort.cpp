#include <iostream>
using namespace std;
int main()
{
    int *arr,n,i,j,min_idx,temp;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    cout<<"Enter the elements:\n";
    arr=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array:\n";
    for(i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    for(i=0;i<=n-2;i++)
    {
        min_idx = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min_idx]>arr[j])
            {
                min_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
    cout<<"\nSorted array:\n";
    for(i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}
