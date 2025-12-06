#include <stdio.h>

void main() {
int n, i, j, temp;
int arr[100];

printf("Enter the number of elements: ");
scanf("%d", &n);

printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}


for(i = 0; i < n-1; i++) {
for(j = i+1; j < n; j++) {
if(arr[i] < arr[j]) {
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;

}
}
}

printf("The largest number is: %d", arr[0]);
printf("The smallest number is: %d", arr[n-1]);

}

