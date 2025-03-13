#include<iostream>
using namespace std;
void swap(int arr[],int a,int b)
{
	int temp;
	temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}
void ssort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(arr[min]!=i)
		{
			swap(arr,min,i);
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
	ssort(arr,n);
	cout<<"SORTED ARRAY"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
