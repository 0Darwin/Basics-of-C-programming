#include <stdio.h>
int main(){
printf("* HELLO, WORLD! PROGRAM:*");

//exo 1
printf("\n");
printf("Hello World\n");

printf("\n");
printf("* SUM OF TWO INTEGERS*");
printf("\n");

//exo 2
int a,b;printf("Enter two integers: ");
scanf("%d %d", &a, &b);
printf("Sum: %d\n", a + b);

 printf("\n");
 printf("AREA OF A RECTANGLE");
 printf("\n");

//exo 3
float length, breadth;
printf("Enter length and breadth: ");
scanf("%f %f", &length, &breadth);
printf("Area: %.2f\n", length * breadth);

printf("\n");
printf("*SWAP TWO NUMBERS WITHOUT TEMPORARY VARIABLE:*");
printf("\n");

//exo 4
int c, d;
printf("Enter two numbers: ");
scanf("%d %d", &c, &d);
c = c + d;
d = c - d;
c = c - d;
printf("After swapping: c = %d, d = %d\n", c, d);

printf("\n");
printf("* CHECK IF A NUMBER IS EVEN OR ODD:*");
printf("\n");

//exo 5
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (num % 2 == 0)
printf("%d is even\n", num);
else
printf("%d is odd\n", num);
return 0;
}