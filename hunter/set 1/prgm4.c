#include<stdio.h>
int main(void)
{
	int a[100],i,j,n,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("%d   ",a[i]);
		}
		count=0;
	}
}
