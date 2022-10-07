#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],r,c,i,j;    
	printf("Enter the number of rows = ");    
	scanf("%d","%d",&r,&c);    
	printf("Enter the first matrix's element :\n");    
	for(i=0;i<r;i++)    
	{	    
		for(j=0;j<c;j++)    
		{    
			scanf("%d",&a[i][j]);    
		}    
	}
}
