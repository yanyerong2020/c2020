#include<stdio.h>
void main(){
int a,b,c;
printf("请输入秒数\n");
scanf("%d",&a);
b=a/3600;
c=(a%3600)/60;
printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",a);
}
