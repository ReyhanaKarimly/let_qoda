#include <stdio.h>
#include <conio.h>
void main()
{
int input;
printf("-How old are you?\n-");
scanf("%i",&input);
if(input%10>=5)
{
printf("-Vam %i let",input);
}
else if
	(input%10<5)
{
	printf("-Vam %i qoda",input);
}
else 
	printf("ERROR!");
getch();
}