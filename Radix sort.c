#include<stdio.h>
int max(int a[],int n)
{
	int k=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>k)
		{
			k=a[i];
		}
	}
	return k;
}
void count(int a[],int n,int div)
{
	int k=max(a,n);
	int c[k+1];
	int b[n];
	for(int i=0;i<k;i++)
	{
		c[i]=0;
	}
	for(int j=0;j<n;j++)
	{
		c[(a[j]/div)%10]++;
	}
	for(int i=1;i<=k;i++)
	{
		c[i]=c[i]+c[i-1];
	}
	for(int j=n-1;j>=0;j--)
	{
		b[c[(a[j]/div)%10]-1]=a[j];
		c[(a[j]/div)%10]--;
	}
	for(int i=0;i<n;i++)
	{
		a[i]=b[i];
	}
}
void radix(int a[],int n)
{
	int k=max(a,n);
	int d=0;
	while(k>0)
	{
		k=k/10;
		d++;
	}
	int div=1;
	for(int i=1;i<n;i++)
	{
		count(a,n,div);
		div=div*10;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int n,i;
	printf("ENTER THE SIZE OF THE ARRAY : ");
	scanf("%d",&n);
	int a[n];
	printf("ENTER THE ELEMENTS OF THE ARRAY : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	radix(a,n);
	return 0;
}
