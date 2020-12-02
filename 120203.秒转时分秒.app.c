#include<stdio.h>
void main(){
int a,b,c,d;
printf("请输入秒数\n");
scanf("%d",&a);
b=a/3600;
c=(a%3600)/60;
d=a-3600*b-60*c;
printf("%d时,%d分,%d秒\n",b,c,d);
}
