#include <stdio.h>
int main()
{
printf("1-e zadanie\n");
double a=3.0;
short b2=2;
printf("%f\n",a+b2);
printf("2-e zadanie\n");
int x=10;
printf("%u\n",5u-x);
printf("3-e zadanie\n");
int i1=11;
int i2=3;
float x1=(float)i1/i2;
printf("x = %f\n",x1);
printf("3-e zadanie\n");
char c=97;
printf("c=%c\n",c);
printf("c=%d\n",(int)c);
printf("4-e zadanie\n");
int b=7;
b=b>>1;
printf(">>1 %d\n",b);
b=b<<1;
printf("<<1 %d\n",b);
b=b<<5;
printf("<<5 %d\n",b);
b=b>>2;
printf(">>2 %d\n",b);
int a1=7,b1=9;
b=0;
b=a1&b1;
printf("a&b %d\n",b);
b=a1|b1;
printf("a|b %d\n",b);
b=a1^b1;
printf("a^b %d\n",b);

b = ~a1;
printf("~a %d\n",b);
return 0;
}
