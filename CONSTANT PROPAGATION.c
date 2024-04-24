#include<stdio.h>

int a,b,x;

int before_propagation();

int after_propagation();

int main()

{

printf("before ");

before_propagation();

printf("after ");

after_propagation();

}

int before_propagation()

{

int a=5;

int b=10;

x=a+b;

printf("%d\n",x);

}

int after_propagation()

{

x=5+10;

printf("%d",x);

} 
