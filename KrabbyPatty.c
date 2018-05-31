/* lib1 Source Code
Copyright PS7
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
char menuitem[] = "Krabby Patty";
int quant;
char pints [10];
float price = 2.99; //The price of a Krabby Patty

printf("How many Krabby Patty's do you want?");
gets(pints);
quant=atoi(pints);
printf("That'd be $%.2f.\n",quant*price);
}
