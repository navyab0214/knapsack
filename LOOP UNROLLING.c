#include<stdio.h>
void before();
void after();
int main()
{
	int i,n;
	printf("enter the number:\n");
scanf("%d",&n);
before();
after();
return 0;
}
void before()
{
	int i,n;
printf("before the  loop\n");
for(i=0;i<n;i++)
{
printf("%d\n",i);
}
printf("\n");
}
void after()
{
	int i,n;
printf("after the loop\n");
for(i=0;i<n;i=i+5)
{
printf("%d\n",i);
printf("%d\n",i+1);
printf("%d\n",i+2);
printf("%d\n",i+3);
printf("%d\n",i+4);
}
}
