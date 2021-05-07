#include<stdio.h>
#include<stdlib.h>
void main()
{
char a[100];     
char set[100] = {"Hello, World! \n"};
fgets(a, sizeof(a), stdin);
printf("%s",set);
puts(a);
}