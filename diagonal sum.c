#include<stdio.h>
#include<stdlib.h>
int main()
{
     int arr[3][3],n,i,j,sum=0,sum1=0,d=0;
     printf("enter dimension");
     scaf("%d",&n);
     printf("enter the elements in matrix");
     for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
        {
            scanf("%d",arr[i][j]);
            
        }

    }
    

     for(i=0;i<n;i++)
     {
                sum=sum+arr[i][i];
     }
        printf("sum of 1st diagonal is %d",sum);
    
    for(i=0;i<n;i++)
    {
          j=n;
          sum1=sum1+arr[i][j]; 

    }
    printf("sum of 2st diagonal is %d",sum1);
    
    d= abs(sum-sum1);
    
    printf("diagonal difference=%d", d);
    return 0;
}
