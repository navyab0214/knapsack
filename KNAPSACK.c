#include<stdio.h>
int main()
{
	//w=weight,p=profit,r=ratio,Tv=Totalvalue,temp=temporary variable,c=capacity,amt=amount
	//i=current node,j=i+1(next node) i,j values changes based on our data
     float w[50],p[50],r[50],Tv=0,temp,c=0,amt=0;
     int n,i,j;
     printf("Number of items :");
     scanf("%d",&n);
	    for (i=0;i<n;i++)
    {
        printf("Profit and Weight of the item[%d] :\n",i);
        scanf("%f %f",&p[i],&w[i]);
    }
    printf("capacity of knapsack :\n");
    scanf("%f",&c);     
    for(i=0;i<n;i++)
         r[i]=p[i]/w[i];         
    for (i=0;i<n;i++)
      for (j=i+1;j<n;j++)
        if (r[i]<r[j])
        {
            temp=r[j];
            r[j]=r[i];
            r[i]=temp;
 
            temp=w[j];
            w[j]=w[i];
            w[i]=temp;
 
            temp=p[j];
            p[j]=p[i];
            p[i]=temp;
        }  
    for(i=0;i<n;i++)
    {	
        if(w[i]>c)      
    		break;       
        else
        {
          Tv=Tv+p[i];
          c=c-w[i];
        }
    }
       Tv=Tv+(r[i]*c);      
     printf("\nThe maximum value is :%f\n",Tv);    
     return 0;
}
