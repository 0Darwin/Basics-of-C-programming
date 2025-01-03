#include <stdio.h>
//exo 2
void concatenate(char* str1, char* str2) {
while (*str1) str1++; // Move to the end of the first string
while (*str2) {
*str1 = *str2;
str1++;
str2++;
}
*str1 = '\0'; // Null terminate the concatenated string
}
int main() {
char str1[100], str2[50];
printf("Enter first string: ");
fgets(str1, sizeof(str1), stdin);
printf("Enter second string: ");
fgets(str2, sizeof(str2), stdin);
concatenate(str1, str2);
printf("Concatenated string: %s\n", str1);
return 0;
}