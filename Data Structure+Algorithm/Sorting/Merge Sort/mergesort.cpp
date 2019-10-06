#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int r)    //function to merge two sorted arrays
{
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1],R[n2];        // creating left and right sub-array

	for(int i=0;i<n1;i++){
		L[i] = arr[l+i];
	}
	for(int i=0;i<n2;i++){
		R[i] = arr[m+i+1];
	}
	int i=0,j=0,k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			arr[k++]=L[i++];
		}
		else{
			arr[k++]=R[j++];
		}
	}
	while(i<n1){
		arr[k++]=L[i++];
	}
	while(j<n2){
		arr[k++]=R[j++];
	}
}

void merge_sort(int arr[],int l,int r)   // Recursive function to perform merge sort
{
	if(l < r)
	{
		int m = l+(r-l)/2;
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}

void mergeSort(int n,int arr[])
{
	merge_sort(arr,0,n);
}

int main() 
{
	int n = 7;
	int arr[7] = {9, 13, 4, 6, 2, 11, 5};
	mergeSort(n, arr);

	for(int i=0; i<n; i++)   //function to print an sorted array
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}