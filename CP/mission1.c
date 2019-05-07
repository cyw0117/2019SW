#include <stdio.h>


char menu();
void deposit(int * balance);
void withdraw(int *balance);
int inputInt(char *s);

int main (void){
    char ch;
    int balance = 0;

    while (1){
	printf("*현재 잔액은 %d원 입니다.\n\n",balance); 
	ch = menu();
	switch(ch){
	    case 'i':
		deposit(&balance);
		break;
	    case 'o':
		withdraw(&balance);
		break;
	    case 'q':
		return 0;
	    default :
		printf("*잘못된 입력입니다.\n");
		break;
	}
    }

    return 0;
}

//Print the menu and Return the character when user chooses correctly
char menu(){
    char ch;

    while (1){
	printf("#메뉴를 선택하시오(i-입금, o-출금, q-종료):" );
	scanf(" %c", &ch);
	if (ch =='i' || ch == 'o' || ch == 'q')
	{
	    break;
	}else
	{
	    printf("*잘못 입력하셨습니다.\n");
	}
    }
    return ch;
}

void deposit(int *balance){
    int money = 0;

    money = inputInt("#입금액을 입력하세요:");
    *balance += money;
}

void withdraw(int *balance){
    int money = inputInt("#출금액을 입력하세요:");
    if (*balance < money )
    {
	printf("*잔액이 부족합니다.\n");
    }else
    {
	*balance -= money;
    }

}

int inputInt(char *s){
    int money;

    while (1) {
	printf("%s", s);
	scanf("%d", &money);

	if ( money < 0)
	{
	    printf("*잘못입력하셨습니다.\n");
	}else 
	{
	    break;
	}

    }
    return money;
}
