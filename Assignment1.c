#include<stdio.h>
struct stru
{
	char str[20];
	int number;
	float floatnumber;
};

void putstruct1(struct stru s1)
{

	printf("\nChar array : %s ",s1.str);
	printf("\nInt  : %d",s1.number);
	printf("\nFloat : %f",s1.floatnumber);
}

void putstruct2(struct stru *s1)
{
	printf("\nChar array : %s ",s1->str);
	printf("\nInt  : %d",s1->number);
	printf("\nFloat : %f\n",s1->floatnumber);
}

int main()
{
	struct stru str1;
	printf("Pass by value\n");
	printf("Enter a string-");
	scanf("%s",str1.str);
	printf("Enter an Integer-");
	scanf("%d",&str1.number);
	printf("Enter a decimal-");
	scanf("%f",&str1.floatnumber);

	putstruct1(str1);
	printf("Pass by reference\n");
	printf("Enter a string-");
	scanf("%s",str1.str);
	printf("Enter an Integer-");
	scanf("%d",&str1.number);
	printf("Enter a decimal-");
	scanf("%f",&str1.floatnumber);

	putstruct2(&str1);

	return 0;
}
