#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* a program that multiplies two numbers
*
*Return:0
*/

int main(int argc, char *argv[])
{
if (argc<=2)
{
printf("error\n");
else
{
printf("%d\n", (argv[1]*argv[2]));
}
return(0);
}
