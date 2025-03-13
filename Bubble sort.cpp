#include<iostream>
using namespace std;
void swap(int arr[],int a,int b)
{
	int temp;
	temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}
void bsort(int arr[],int n)
{	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr,j+1,j);
			}
		}
	}
}

int main()
{
	int n;
	cout<<"ENTER THE NUMBER OF ELEMENTS"<<endl;
	cin>>n;
	int arr[n];
	cout<<"ENTER THE UNSORTED ARRAY IS "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bsort(arr,n);
	cout<<"SORTED ARRAY"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
