// insertion sort by harshmauny
#include<iostream>
using namespace std;
int main()
{
    int *arr,n,i,j,temp,exchg,key;
    cout<<"Enter the no. of elements:";
    cin>>n;
    cout<<"Enter the elements:\n";
    arr=new int[n];
    for(i=0;i<n;i++)
    {
        cout<<"["<<i<<"]:";
        cin>>arr[i];
    }

    cout<<"original array:\n";
    for(i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }

    for(i=1;i<n;i++)
    {
        key = arr[i];
        j = i-1;
            while(arr[j]>key && j>=0)
            {
                arr[j+1] = arr[j];
                j--;
            }
        arr[j+1] = key;
    }

     cout<<"\nSorted array:\n";
    for(i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;

}
