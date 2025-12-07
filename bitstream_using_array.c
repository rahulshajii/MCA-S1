#include<stdio.h>

void main()

{

int a[]={0,0,0,0,0,0,0,0,0,0,0,0,0},b[]={0,0,0,0,0,0,0,0,0,0,0,0,0},i,j,s1,s2,f,g;

printf("Enter the Limit of the first array:");
scanf("%d",&s1);
printf("\nEnter the Elements");
for (i=0;i<s1;i++)
{

scanf("%d",&f);


a[f]=1;

}

printf("Enter the Limit of the second array\n");
scanf("%d",&s2);
printf("Enter the Elements\n");
for(j=0;j<s2;j++)
{

scanf("%d",&g);


b[g]=1;

}

printf("BITSTRING OF FIRST ARRAY:");
for(i=0;i<11;i++)
{
printf("%d",a[i]);

}

printf("\nBitstring of 2nd array :");
for(j=0;j<11;j++)
{
printf("%d",b[j]);
}

printf("\nUnion Operation:");
for(i=0;i<11;i++)
{
printf("%d",a[i]|b[i]);
}

printf("\nAND Operation:");
for(i=0;i<11;i++)
{
printf("%d",a[i]|b[i]);
}

printf("\nCOMPLIMENT OF ARRAY 1:");
for(i=0;i<11;i++)
{
printf("%d",!a[i]);
}
printf("\nCOMPLIMENT OF ARRAY 2:");
for(j=0;j<11;j++)
{
printf("%d",!b[j]);
}
printf("\n");







}
