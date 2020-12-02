#include<stdio.h>
void main(){
int a,b,c,d;
printf("请输入秒数\n");
scanf("%d",&a);
b=a/3600;
c=(a%3600)/60;
d=a-3600*b-60*c;
if(a>0&&a<86399){
printf("%02d:%02d:%02d\n",b,c,d);
}
else {
printf("你输入的数值超出范围");
}

}
