#include<stdio.h>
int main(void)
{
	int n,k,a[100],i,count=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			if(count==k)
			{
				printf("%d",a[i]);
			}
		count=count+1;
		}
	}
}
