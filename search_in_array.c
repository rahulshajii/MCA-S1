#include <stdio.h>
void main()
{

int arr[50],n,s,flag=0,po;
printf("Enter the Limit of array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}


printf("Enter the element to be search:");
scanf("%d",&s);

for(int i=0;i<n;i++)
{
if(arr[i]==s)
{
flag=1;
po = i;
}
}
if(flag == 1)
{
printf("%d found at the place %d ",s,po);
}
else{
printf("%d not found in array",s);
}
}


//https://drive.google.com/drive/folders/1OISM6VfFUZ-Pv6cnxshNbjlrV7xGprGs
