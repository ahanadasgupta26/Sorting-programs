#include<stdio.h>
void swap(int a[],int i,int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int partition(int a[],int l,int h)
{
	int pivot=a[l];
	int i=l;
	int j=h;
	while(i<j)
	{
		while(i<=h && a[i]<=pivot)
		{
			i++;
		}
		while(a[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
			swap(a,i,j);
		}
	}
	swap(a,l,j);
	return j;
}
void quicksort(int a[],int l,int h)
{
	if(l<h)
	{
		int pivot=partition(a,l,h);
		quicksort(a,l,pivot-1);
		quicksort(a,pivot+1,h);
	}
}
int main()
{
	int n,i;
	printf("ENTER THE SIZE OF THE ARRAY: ");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS : ");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("SORTED ARRAY : ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
