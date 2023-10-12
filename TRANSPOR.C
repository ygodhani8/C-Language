#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10][10],b[10][10],s=0,r,c;
    clrscr();
    printf("enter a row and column:= ");
    scanf("%d %d",&r,&c);
    for(int k=0;k<r;k++)
    {
       for(int l=0;l<c;l++)
       {
	 scanf("%d",&a[k][l]);
       }
    }
    for(int q=0;q<c;q++)
    {
       for(int w=0;w<r;w++)
       {
	b[q][w]= a[q][w];
       }
    }
    for(int i=0;i<r;i++)
    {
       for(int j=0;j<c;j++)
       {
	printf("%d\t",b[i][j]);
       }
       printf("\n");
    }


    // printf("sum of diagonal matrix:= %d",s);
    getch();
}