#include <stdio.h>
/* test code for input var */

int g_var1 = 0;
void exFunc(int * var);
int inputVarTest(int a){
	int ret = 0;
	int ret1 = 0;
	int ret2 = 0;
	int ret3 = 0;
	int ret4 = 0;
	int ret5 = 0;
	int ret6 = 0;
	int ret7 = 0;
	int ret8 = 0;
	
	
	if (a == 100 && g_var1 == 10) {
		ret = 100;
	}else if(a == 50 && g_var1 ==5){
		ret =50;
	}else {
		ret =-1;
	}
	
	return ret;
}

int main()
{
	int num1 = 10;
    int num2 = -10;

	printf("10진 정수 출력(부호O) : %d\n", num2);
    printf("10진 정수 출력(부호X) : %u\n", num1);
	printf("error message"); 
return 0;
}



