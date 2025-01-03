#include <stdio.h>
int main(){
//exo 1
printf("Hello World\n");

//exo 2
int a,b;printf("Enter two integers: ");
scanf("%d %d", &a, &b);
printf("Sum: %d\n", a + b);

//exo 3
float length, breadth;
printf("Enter length and breadth: ");
scanf("%f %f", &length, &breadth);
printf("Area: %.2f\n", length * breadth);


//exo 4
int c, d;
printf("Enter two numbers: ");
scanf("%d %d", &c, &d);
c = c + d;
d = c - d;
c = c - d;
printf("After swapping: c = %d, d = %d\n", c, d);

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