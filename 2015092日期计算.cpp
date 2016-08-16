#include "stdio.h"
int year,day;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		//	 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,12
int main(){
	scanf("%d\n%d",&year,&day);
	if( (year%4==0&&year%100!=0) ||year%400==0)
		a[2]=29;
	
	int i=1;
	while(day-a[i]>0){
		day-=a[i++];
	}
	printf("%d\n%d",i,day);
	
	return 0;
}