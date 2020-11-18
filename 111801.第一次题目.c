#include<stdio.h>
void main(){
int a=3,b=4,c=5;
if(a||b+c&&b-c){
	printf("为真语句\n");
printf("为假语句\n");
}
else if(!(a>b&&!c||1)){
	printf("为真语句\n");
printf("为假语句\n");
}

}
