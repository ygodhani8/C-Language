#include<stdio.h>
#include<conio.h>
struct student
{
   int grno;
   char name[10];
   float per;
};
void main()
{
   struct student s[10];
   int n;
   clrscr();
   printf("enter no of student data:=");
   scanf("%d",&n);

   for(int i=0;i<n;i++)
   {
     scanf("%d",&s[i].grno);
     scanf("%s",s[i].name);
     scanf("%f",&s[i].per);
   }

    for(int j=0;j<n;j++)
    {
     printf("%d\t %s\t %f\n",s[j].grno,s[j].name,s[j].per);
    }


   getch();
}