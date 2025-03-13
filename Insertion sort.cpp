#include<iostream>
using namespace std;
void inssort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
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
	inssort(arr,n);
	cout<<"SORTED ARRAY"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
