#include<stdio.h>
void main()
{
char choice;
printf("enter the choice\n");
scanf("%c",&choice);
switch(choice)
{
case'c':printf("swatch barath, cleaning conopy\n");
		break;
case'r':printf("run 10 rounda the colege\n");
		break;
case'a':printf("write assignment of 100 question\n");
		break;
case's':printf("one week suspension from class\n");
		break;
default:printf("sit in front\n");
}
}
