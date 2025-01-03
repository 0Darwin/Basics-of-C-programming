#include <stdio.h>
#include <stdio.h>
int main(){
printf("*TAKE A STRING AS INPUT AND DISPLAY ITS LENGTH: *");
printf("\n");
//exo 1
char str[100];
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
printf("Length of the string: %lu\n", strlen(str) - 1);
return 0;
}