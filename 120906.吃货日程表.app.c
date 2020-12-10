#include<stdio.h>
#include<string.h>
void main(){
printf("欢迎使用吃货小程序\n");
while(1){
	char x[27];
	char a[]="春节";
	char b[]="端午";
	char c[]="中秋节";
	char d[]="元宵";
	scanf("%s",&x);
	if(strcmp(a,x)==0){
	printf("吃饺子\n");
	}
	else if(strcmp(b,x)==0){
	printf("吃粽子\n");
	}
	else if(strcmp(c,x)==0){
	printf("吃月饼\n");
	}
	else if(strcmp(d,x)==0){
	printf("吃汤圆\n");
	}
		else {
	printf("请输入正确节日\n");
	}
	}
}
