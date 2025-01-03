#include <stdio.h>
int main(){
printf("*STORE 5 INTEGERS IN AN ARRAY AND PRINT THEM:*");
printf("\n");
//exo 1
int arr[5];
printf("Enter 5 integers: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &arr[i]);
}
printf("Array elements: ");
for (int i = 0; i < 5; i++) {
printf("%d ", arr[i]);
}
printf("\n");

printf("\n");
printf("*FIND THE LARGEST AND SMALLEST ELEMENTS IN AN ARRAY: *");
printf("\n");

//exo 2
int T[5], largest, smallest;
printf("Enter 5 integers: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &T[i]);
}
largest = smallest = T[0];
for (int i = 1; i < 5; i++) {
if (T[i] > largest) largest = T[i];
if (T[i] < smallest) smallest = T[i];
}
printf("Largest: %d, Smallest: %d\n", largest, smallest);

printf("\n");
printf("*CALCULATE THE SUM AND AVERAGE OF ELEMENTS IN AN ARRAY:*");
printf("\n");

//exo 3
int arrr[5], sum = 0;
float avg;
printf("Enter 5 integers: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &arrr[i]);
}
for (int i = 0; i < 5; i++) {
sum += arrr[i];
}
avg = sum / 5.0;
printf("Sum: %d, Average: %.2f\n", sum, avg);

printf("\n");
printf("*REVERSE AN ARRAY:*");
printf("\n");

//exo 4
int ar[5], temp;
printf("Enter 5 integers: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &ar[i]);
}
for (int i = 0; i < 5 / 2; i++) {
temp = ar[i];
ar[i] = ar[4 - i];
ar[4 - i] = temp;
}
printf("Reversed array: ");
for (int i = 0; i < 5; i++) {
printf("%d ", ar[i]);
}
printf("\n");

printf("\n");
printf("MERGE TWO ARRAYS INTO A SINGLE ARRAY");
printf("\n");

//exo 5
int arr1[5], arr2[5], merged[10];
printf("Enter 5 integers for array 1: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &arr1[i]);
}
printf("Enter 5 integers for array 2: ");
for (int i = 0; i < 5; i++) {
scanf("%d", &arr2[i]);
}
for (int i = 0; i < 5; i++) {
merged[i] = arr1[i];
merged[i + 5] = arr2[i];
}
printf("Merged array: ");
for (int i = 0; i < 10; i++) {
printf("%d ", merged[i]);
}
printf("\n");
return 0;
}