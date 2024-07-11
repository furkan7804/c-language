#include<stdio.h>;
#include<conio.h>;
main()
{
	int a = 12;
	int b = 6;
	int Add,Sub,Mul,Div,Modul ;
	clrscr();
       Add = a + b;
       Sub = a - b;
       Mul = a * b;
       Div = a/b;
       Modul = a%b;

	printf("addition of a and b is %d\n",Add);
	printf("Subtraction of a and b is %d\n",Sub);
	printf("Mulatiplication of a and b is %d\n",Mul);
	printf("Division of a and b is %d\n",Div);
	printf("Modulo of a and b is %d\n",Modul);
	getch();
}