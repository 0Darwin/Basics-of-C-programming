#include <stdio.h>
#include <stdlib.h>
int main(){

printf(" *largest of three numbers:*\n");

//exo 1
int a, b, c;
printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);
if (a > b && a > c)
  printf("%d is the largest\n", a);
else if (b > c)
  printf("%d is the largest\n", b);
else
  printf("%d is the largest\n", c);
 
 printf("\n");
 printf("*check if a number is positive, negative, or zero:*\n");
 
//exo 2
 int num;
 printf("Enter a number: ");
 scanf("%d", &num);
if (num > 0)
  printf("%d is positive\n", num);
else if (num < 0)
  printf("%d is negative\n", num);
else
 printf("The number is zero\n");
 
 printf("\n");
  printf("*the factorial of a number :\n*");
  
//exo 3 
int numb,factorial = 1;
printf("Enter a number: ");
scanf("%d", &numb);
for (int i = 1; i <= numb; i++) {
factorial *= i;
}
printf("Factorial: %d\n", factorial);

printf("\n");
printf("*the first n natural numbers :*");

//exo 4
int n, i = 1;
printf("Enter a number: ");
scanf("%d", &n);
while (i <= n) {
printf("%d ", i);
i++;
}
printf("\n");


printf("\n");
printf("* DISPLAY MULTIPLICATION TABLE OF A GIVEN NUMBER :*");

//exo 5
int number;
printf("Enter a number: ");
scanf("%d", &number);
for (int i = 1; i <= 10; i++) 
printf("%d x %d = %d\n", number, i, number * i);

 return 0;
}