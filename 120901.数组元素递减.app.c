#include<stdio.h>
void main(){
	int i=91;
int a,b;
int x[9][10]={
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0}
};
	for(a=0;a<9;a++){
		for(b=0;b<10;b++){
			i--;
			x[a][b]=i;
		printf("%d ",x[a][b]);
		}
		printf("\n");
	}
}
