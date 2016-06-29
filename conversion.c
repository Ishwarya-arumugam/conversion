#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[100],b[100],c;
clrscr();
printf("Enter the number");
scanf("%d",&c);
for(i=0;i<c;i++)
{
b[i]=0;
}
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
b[a[i]]++;
}
for(i=0;i<c;i++)
{
if(b[a[i]]==1)
printf("%d",a[i]);
}
getch();
}
