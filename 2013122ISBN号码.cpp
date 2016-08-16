#include "stdio.h"
char a[13];
int main(){
	scanf("%s",a);
	// 0-670-821 6  2  -  4
	// 012345678 9  10 11 12
	int num=(a[0]*1+a[2]*2+a[3]*3+a[4]*4+a[6]*5+a[7]*6+a[8]*7+a[9]*8+a[10]*9-45*'0')%11;
	//printf("num=%d ",num);
	
	if(num==10){
		if(a[12]=='X')
			printf("Right");
		else{
			a[12]='X';
			printf("%s",a);
		}	
	}else{
		if(num+'0'==a[12])
			printf("Right");
		else{
			a[12]=num+'0';
			printf("%s",a);
		}
	}
	
	return 0;
}
