#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
printf("1-e zadanie\n");
int x=2%2+2*2-2/2;
printf("x = %d\n",x);
x=(3*9*(3+(9*3/3)));
printf("x = %d\n",x);

printf("2-e zadanie\n");
printf("a/(b*c(/d*(e/(f*h))))\n");
printf("3-e zadanie\n");
int n1 = 356, m1 = 159;
printf("mladhay cifra celoy chasti  %d\n",(m1/n1)%10);
printf("4-e zadanie\n");
int hour1, min1;
float sec1=56551;
hour1 = sec1/3600;
min1 = (sec1-hour1*3600)/60;
printf("Proshlo vremeni \n Hour:%d Min:%d\n",hour1,min1);
printf("5-e zadanie\n");
int a=10, b=20;
printf("a=%d b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d\n",a,b);
printf("6-e zadanie\n");
int time=9866, sec, min, hour;
printf("time = %d\n",time);
sec=time%60;
time/=60;
min=time%60;
time/=60;
hour=time;
printf("%02d:%02d:%02d\n",hour,min,sec);
printf("7-e zadanie\n");
/*int s[40];
int i,n=526;
for (i=0; n; i++)
{
s[i]=n%2;
n/=2;
}
for (i--; i>=0; i--)
{
printf("%d",s[i]);
}
printf("8-e zadanie\n");
*/
int tmp=0,ner=65,ar=591,pw=1;
for (int i=ner-1;i>=0;i--)
{
for(int k=1;k<(ner-1-i);k++)
{
pw*=2;
}
tmp+=(ar%10)*pw;
ar/=10;
}
printf("des chislo  %d\n",tmp);
printf("8-e zadanie\n");
int chislo=983;
printf("chislo iznachalno  %d\n",chislo);
chislo = (chislo>>10)|(x<<(32-1));
printf("chislo posle  %d\n",chislo);
printf("9-e zadanie\n");
int ter=12;
printf("chislo iznachalno  %d\n",ter);
ter=ter<<2;
ter=ter>>2;
printf("chislo posle  %d\n",ter);
return 0;
}
