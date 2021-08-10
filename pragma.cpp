//This is the program on Pragma directive.This code is not compiled on some GCC compilers
/* 
#include <stdio.h>

void func1();
void func2();

#pragma startup func1
#pragma exit func2

void func1()
{
	printf("Inside func1()\n");
}

void func2()
{
	printf("Inside func2()\n");
}

int main()
{
	void func1();
	void func2();
	printf("Inside main()\n");

	return 0;
}*/
//This pragma is used to supress the errors
/*#include <stdio.h>

#pragma warn -rvl //no return value
#pragma warn -par //parameter not used
#pragma warn -rch //unreachable code

int main()
{
        int count =1;
	printf("%d\n",count);
        return 0;
        count++;
}

int total()
{
	printf("sum of a and b is c\n");
}

void end(int x)
{
	printf("Inside mend\n");

	return 0;
}*/

