#include<stdio.h>
#include<string.h>
void main()
{
printf("  请回答，答对才能进入游戏哦　\n");
while(1)
{
		char x[50];
		char i[]="柒柒";
int s=7;
int y;
		scanf("%s",&x);
		if(strcmp(x,i)==0)
		{
		printf("  答对了，真棒! \n");
		}
		else 
		{
		printf("  错了错了,重来\n");
		}
scanf("%d",&y);
printf("友情提示：只能输入1—10哦\n");

if(y==7)
{
printf("猜对了，真不错\n");
}
else if(y>7)
{
printf("猜错了，太大了，重猜\n");
}
else
{
printf("猜错了，太小了，重猜\n");
}
