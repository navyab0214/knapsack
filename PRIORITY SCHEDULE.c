#include<stdio.h>
#include<stdlib.h>
void sswap(int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n,i,j;
	printf("enter no of processes:");
	scanf("%d",&n);
	int b[n],p[n],index[n];
	for(i=0;i<n;i++)
	{
		printf("enter burst time and priority value for process %d:",i+1);
		scanf("%d %d",&b[i],&p[i]);
		index[i]=i=1;
	}
	for(i=0;i<n;i++)
	{
		int a=p[i],m=i;
		for(j=0;j<n;j++)
		{
			if(p[j]>a)
			{
				a=p[j];
				m=j;
			}
		}
		swap(&p[i],&p[m]);
		swap(&b[i],&b[m]);
		swap(&index[i],&index[m]);
	}
	int t=0;
	printf("order of process execution is \n");
	for(i=0;i<n;i++)
	{
		printf("%d is executed from %d tp %d\n",index[i],t,t+b[i]);
		t+=b[i];
	}
	printf("\n");
	printf("process %d burst time wait time turn around time \n");
	int wait_time=0;
	for(i=0;i<n;i++)
	{
		printf("%d %d %d %d \n",index[i],b[i],wait_time,wait_time+=b[i]);
	}
	return 0;
}
	
