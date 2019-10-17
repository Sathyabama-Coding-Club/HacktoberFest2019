#include<iostream>
using namespace std;
void merge_arr(int arr[],int  f,int q,int r)
{
    int n1 = (q - f) +1;
    int n2 = (r - q);
    int i,j,k;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
    {
        L[i] = arr[f + i];
    }
    for(j=0;j<n2;j++)
    {
        R[j] = arr[q + j + 1];
    }
    i = 0;
    j = 0;
    k = f;
    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],int f,int r)
{

    if(f != r)
    {
        int q = (f + r) / 2;
        merge_sort(arr,f,q);
        merge_sort(arr,q+1,r);
        merge_arr(arr,f,q,r);
    }
}

int main()
{
    int *arr,n,i,j,temp,f,r;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    cout<<"Enter the elements:\n";
    arr=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    f=0;
    r=n-1;
    cout<<"Original array:\n";
    for(i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    merge_sort(arr,f,r);
    cout<<"\nSorted array:\n";
    for(i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    return 0;
}
