#include<stdio.h>
void main(){
	while(1){
		int x=7;
		int y;
		printf("友情提示，只能输入0-10\n");
		scanf("%d",&y);
		if(y==7){
		printf("猜对了，真不错!");
		}
		else if(y>7){
		printf("猜太大了，你是猪吧?");
		}
		else {
		printf("猜太小了，你是猪吧?");
		}
	
	
	}

}
