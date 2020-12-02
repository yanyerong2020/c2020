#include<stdio.h>
void main (){
char x;
printf("欢迎使用本程序，方向键判断。\n");
scanf("%c",&x);
switch(x){
		case 'a':printf("你在点击'上'\n"); break;
		case 's':printf("你在点击'下'\n"); break;
		case 'd':printf("你在点击'左'\n"); break;
		case 'w':printf("你在点击'右'\n"); break;
		default:printf("输入错误，请输入正确字符\n");

}
}
