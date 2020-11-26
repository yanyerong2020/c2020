#include<stdio.h>
#include<windows.h>
void main(){
int x;
while(1){
for(x=1;x<=1024;x++){
if(x%2==0)
printf("%d\n",x);
Sleep(100);
}
}
}
