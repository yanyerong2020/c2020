#include<stdio.h>
int myfunction(int x){
	if(x<=0){
	return 0;
		
	}
return x+ myfunction(x-1);

}
void main(){
	int x;
	scanf("%d",&x);	
printf("%d\n",myfunction(x));
}
