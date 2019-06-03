#include <stdio.h>


int input();
void bitPrint(int input);

int main(void){
    
    int num = 0;
    num = input();
    bitPrint(num);

    return 0;
}

int input(){
    int num = 0;
    
    printf("2진 비트열로 출력할 정수를 입력하시오 : ");
    scanf("%d", &num);

    return num;
}

void bitPrint(int input){
    int i = 0;
    unsigned int bitMask = 0x80000000;

    for ( i = 0; i < 32; i++) {
	if ( bitMask & input){
	    printf("1");
	}
	else {
	    printf("0");
	}
	bitMask >>=1;
    }

    printf("\n");
}

