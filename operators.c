#include<stdio.h>
int main()
{

   printf("%d\n",1==5==5);//it returns 0(false)

   int i =0;
   printf("%d %d",i,i++);//Unary operator is precedence is from right to left.output:1 0
   
/* int x=5;
   printf("%d %d %d\n",x++,x++,x++);*//*evaluation is from right to left and from the concept
                                        of post fix we get the output:7 6 5*/
                                           
/* int x=2;
   printf("%d   ",++x++);//error occur due to multiple unary operations on single variable at a time
   printf("%d\n",x++);*/    
   
/*int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");*///output:1==1 is TRUE
   
/* int i=5;
   i=i++ - --i + ++i;//we are evaluating from right to left,++i=6,--i=5;i++=5.so final output=6
   printf("%d",i);*/
   
/*int a=7;
   a+=a+=a-=6;//assignment operator is evaluating from right to left.so a=a-6 i.e;a=1,a=a+1 
   printf("%d\n",a);*///i.e;a=2,a=a+2 i.e;a=4.output:4
   
/*int x=10,y=5,p,q;
   p=x>9;//In or operation if one operand is true than no need to check second operand.
   q=p||(x=5,y=10);//so value of x and y does not alter.Output: 1 10 5
   printf("%d %d %d\n",q,x,y);*/
   
/*int x=2,y=1;
   y+=x<<=2;//after doing left shift 2 times, we get x value as 8 and after y=y+x we get y=9.
   printf("%d %d\n",x,y);*/
   
/*int x=2,y=4,z;
    z=y++*x++|y--;//output:4*2(or)5=13 because priority is given to arthematic than unary operators
    printf("%d\n",z);*/
    
/* int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;//evaluation from right to left.output:0
    printf("%d\n",d);*/
    
/*int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;//ternary operator evaluates from right to left.
    printf("%d\n",i);*/
    
/* int a=10,b=20;
    a=(a>5||b=6?40:50);//ternary operator is evaluated first.so we get error.
    printf("%d\n",a);*/
    
/*printf("%x\n",-1>>4);
    printf("%x\n",-1<<4);*/
    
/*int x=7;
    x=(x<<=x%2);//after left shift by 1 we get output 14
    printf("%d\n",x);*/
    
 /*int a=2,b=5,c=1;
    printf("%d\n",(b>=a>=c?1:0));*///logical operator evaluates from left to right.output:1
    
/* int a=5;
    a=a-~a +1;
    printf("%d\n",a);*/
    
/* int a=1,b=1,c=1;
 int x;
    x=--a||++b*(3-1)/2&&b*(--c/3);//output:0
    printf("%d\n",x);*/
    
 /*  int a=10;
   int b = -5;//output:8 -5
   int c = 2.5;
    printf("%d %d",sizeof(a) + sizeof(++b*c),b);*/
    
 /*int i=5;
    i=i++ - i;//output=5-6=-1
    printf("%d",i);*/
    return 0;
}
