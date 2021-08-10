//1) What will be the output of the C program?
/*#include<stdio.h>
#define CONDITION(i)\  //Here defining a condition with '\' operator
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	return 0;
}*/


//2) What will be the output of the C program?
/*#include<stdio.h>
# define loop while(true)
int main()
{
	loop 
	printf("preprocessor-aptitude");
	return 0;
}//output:It prints 'preprocessor-aptitude' infinite times
*/


//3) What will be the output of the C program?
/*#include<stdio.h>
# define x --5 //macros are not implemented on unary operators
int main()
{
	printf("%d",x);
	return 0;
}//output:error macros are not defined for unary operators
*/


//4) What will be the output of the C program ?
/*#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;//Here 'a' becomes 5     
	a -= 3;
	printf("%d %d ", sqr(a), z);
	return 0;
}//output:16 25
*/


//5) What will be the output of the C program?
/*#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;
	printf("%d",i);
}//output:1+2*1+2*1+2=7
*/


//6) What will be the output of the C program?
/*#include<stdio.h>
#define a =
int main()
{
	int num a 6;
	printf("%d",num);
	return 0;
}
*/


//7) What will be the output of the C program?
/*#include<stdio.h>
#define fun(x,y) x*y
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));//Here fun(x+2,y-1) is replaced by x*y
	return 0;
}//output:3
*/


//8) What will be the output of the C program?
/*#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );
	return 0;
}//output:Aug 10 2021
*/


//9) What will be the output of the C program?
/*#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__);
	return 0;
}//output:18:33:54
*/


//10) What will be the output of the C program?
/*#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );//__Line__ prints the line number it present in program
	return 0;
}//output:98
*/


//11) What will be the output of the C program?
/*#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}//output:you and me are great
*/


//12) What will be the output of the C program?
/*#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}//output:%s C preprocessor %s C preprocessor
*/


//13) What will be the output of the C program?
/*#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}//output:macro25=47
*/


//14) What will be the output of the C program?
/*#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	return 0;
}//output:preprocessor 13
*/


//15) What will be the output of the C program?
/*#include<stdio.h>
#define i 10
int main()
{
	#define i 20//Here defining locally.So it is accessed with in the function 
	printf("%d",i);//Here printing in the same function.So i=20
	return 0;
}//output:20
*/


//16) What will be the output of the C program?
/*#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	return 0;
}//output:50
*/


//17) What will be the output of the C program?
/*#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%d", sizeof (i));//Here we are printing character
}
*/
//18)

/*#include<stdio.h>//include standard files to the program 
#define K 3//here defining k as 3
#ifndef Y//here checking Y is defined or not
    #define Y 6//here Y is defining because Y is defined before
#endif//This is end of the if condition
#undef Z//here Z is not defined or not checking
    #define Z 7


int main()
{
    int p=K,q,r;
    q=Y;r=Z;
    printf("%d %d %d ",p,q,r);
    return 0;
}*/

