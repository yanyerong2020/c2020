#include<stdio.h>
#include<windows.h>
void main(){
int a,b;
int x[20][10]={
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
	{1,2,3,4,5,6,7,8,9,10},
};
for(a=0;a<20;a++){
	for(b=0;b<10;b++){
	x[a][b]=0;
	printf("%d ",x[a][b]);
	
	}
	printf("\n");
}
	Sleep(5000);
for(a=0;a<20;a++){
	for(b=0;b<10;b++){
	x[a][b]=999;
	printf("%d ",x[a][b]);
	}
printf("\n");
}
Sleep(5000);
for(a=0;a<20;a++){
	for(b=0;b<10;b++){
	x[a][b]=0;
	printf("%d ",x[a][b]);
	}
printf("\n");
}

}
