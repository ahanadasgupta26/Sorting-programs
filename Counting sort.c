#include<stdio.h>
void countsort(int a[],int b[],int k,int n)
{
	int c[k],i,j;
	for(i=1;i<=k;i++)
	{
		c[i]=0;
	}
	for(j=1;j<=n;j++)
	{
		c[a[j]]=c[a[j]]+1;
	}
	for(i=2;i<=n;i++)
	{
		c[i]=c[i]+c[i-1];
	}
	for(j=n;j>=1;j--)
	{
		b[c[a[j]]]=a[j];
		c[a[j]]--;
	}
	printf("SORTED ARRAY : ");
	for(i=1;i<=n;i++)
	{
		printf("%d",b[i]);
	}
}
int main()
{
	int n,i,max=0;
	printf("ENTER THE SIZE OF THE ARRAY : ");
	scanf("%d",&n);
	int a[n+1],b[n+1];
	printf("ENTER THE ELEMTS OF THE ARRAY : ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])
		{
			max=a[i];
		}
	}
	int k=max;
	countsort(a,b,k,n);
    return 0;
}
