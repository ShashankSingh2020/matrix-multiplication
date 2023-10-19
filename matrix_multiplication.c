#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
    printf("enter the order of matrix A\n");
    scanf("%d %d",&m,&n);
    printf("enter the order of matrix B\n");
    scanf("%d %d",&p,&q);
    if (n!=p)
    {
        printf("matrix multiplication not possible\n");
    }
    else
    {
        printf("enter the value for matrix A\n");
        for ( i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d",&a[i][j]);
            }
            
        }
        
    }
    printf("Enter the value for matrix B\n");
    for ( i = 0; i < p; i++)
    {
        for ( j= 0; j < q; j++)
        {
            scanf("%d",& b[i][j]);
        }
        
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < q; j++)
        {
            c[i][j]=0;
            for ( k= 0; k < n; k++)
            {
                c[i][j] = c[i][j] + a[i][j] * b[k][j];
            }
            
        }
        
    }
    printf("the element of matrix A\n");
    for (i = 0; i <m; i++)
    {
        for (j = 0; j < n; j++) 
        {
             printf("%d\t",a[i][j]);
        }
        printf("\n");    
    }
    printf("the element of matrix B\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");    
    }
    printf("the resultant matrix c\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
        
    }
    
    
    
    
    
    

    return 0;
}

