#include <stdio.h>
void main()
{
int a, b, temp;

printf("Enter the limit of first array: ");
scanf("%d", &a);
int arr1[a];
printf("Enter the elements of first array:");
for (int i = 0; i < a; i++) {
scanf("%d", &arr1[i]);
}
printf("Enter the limit of second array: ");
scanf("%d", &b);
int arr2[b];
printf("Enter the elements of second array:");
for (int i = 0; i < b; i++) {
scanf("%d", &arr2[i]);
}
 int total = a + b;
 int merge[total];

for (int i = 0; i < a; i++) {
merge[i] = arr1[i];
}
for (int i = 0; i < b; i++) {
merge[a + i] = arr2[i];
}

for (int i = 0; i < total - 1; i++) {
for (int j = 0; j < total - i - 1; j++) {
if (merge[j] > merge[j + 1]) {
temp = merge[j];
merge[j] = merge[j + 1];
merge[j + 1] = temp;
}
}
}
printf("sorted merged array:");
for (int i = 0; i < total; i++) {
printf("%d\t", merge[i]);
}
}

