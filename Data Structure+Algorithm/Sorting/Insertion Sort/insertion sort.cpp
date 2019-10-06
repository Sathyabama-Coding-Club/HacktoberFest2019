#include<iostream>
using namespace std;
void insertionSort(int ar[],int size)
{
    int key,j;
    for(int i=1;i<size;i++)
	{
		key=ar[i];
		for(j=i-1;j>=0&&ar[j]>key;j--)
		{
			ar[j+1]=ar[j];
		}
		ar[j+1]=key;
	}
}
int main()
{
	int ar[] = {2,4,6,1,9,7,3,0};
	int size=8;
	insertionSort(ar,size);
	for(int i=0;i<size;i++)
	cout<<ar[i]<<"  ";
}
