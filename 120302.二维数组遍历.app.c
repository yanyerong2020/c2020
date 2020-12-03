#include<stdio.h>
void main(){
int row,column;
int array2d[3][7]={
	{1,2,3,4,5,6,7},
	{11,12,13,14,15,16,17},
	{21,22,23,24,25,26,27}
};
for(row=0;row<3;row++){
	for(column=0;column<7;column++){
printf("%d ",array2d[row][column]);

	}
printf("\n");
}
}
