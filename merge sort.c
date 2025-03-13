#include<stdio.h>
void merge(int a[],int l,int mid,int r)
{
	int b[100];
	int i=l;
	int j=mid+1;
	int k=l;
	while(i<=mid && j<=r)
	{
		if(a[i]>=a[j])
		{
			b[k]=a[j];
			j++;
		}
		else
		{
			b[k]=a[i];
			i++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=r)
		{
			b[k]=a[j];
			k++;
			j++;
		}
	}
	else
	{
		while(i<=r)
		{
			b[k]=a[i];
			k++;
			i++;
		}
	}
	for(k=l;k<=r;k++)
	{
		a[k]=b[k];
	}
}
void mergesort(int a[],int l,int r)
{
	int mid=(l+r)/2;
	if(l<r)
	{
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}
int main()
{
	int n,i;
	printf("ENTER THE number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("ENTER THE ELEMENTS OF THE ARRAY : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("sorted array : ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
