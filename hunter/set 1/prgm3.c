#include<stdio.h>
int main(void)
{
	int n,a[100],i,j,temp,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			count++;
		}
	}
	if(count>0)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==i)
			{
				printf("%d ",a[i]);
			}
		}
	}
	else
	printf("-1");
}
