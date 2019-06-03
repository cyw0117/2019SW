#include<stdio.h>
#include<string.h>
#define STUDENT_CNT (5)
#define NAME_LENGTH (20)
#define SUBJECT_CNT (3)

int menu();
void inputData(char name[][NAME_LENGTH], int score[][SUBJECT_CNT]);
void updateData(char name[][NAME_LENGTH], int score[][SUBJECT_CNT]);
void outputData(char name[][NAME_LENGTH], int score[][SUBJECT_CNT]);
int inputInt(const char *);
void myflush(void);

int main()
{
	char name[STUDENT_CNT][NAME_LENGTH];
	int score[STUDENT_CNT][SUBJECT_CNT];

	int choiceMenu;

	inputData(name, score);
	while (1) {
		choiceMenu = menu();
		if (choiceMenu == 3) {
			break;
		}
		switch (choiceMenu) {
		case 1: updateData(name, score); break;
		case 2: outputData(name, score); break;
		default:;
		}
	}
	getchar();
	return 0;
}

int menu()
{
	char menuList[][20] = { "update", "output", "quit" };
	int  menuCnt = (int)(sizeof(menuList) / sizeof(menuList[0]));
	int i;
	int choiceMenu;

	do {
		printf("-------------------\n");
		for (i = 0; i < menuCnt; i++) {
			printf("%d. %s\n", i + 1, menuList[i]);
		}
		printf("-------------------\n");
		choiceMenu = inputInt( "메뉴를 선택하세요(1~3) : ");

	} while (choiceMenu < 1 || choiceMenu>menuCnt);
	myflush();
	return choiceMenu;
}

void inputData(char name[][NAME_LENGTH], int score[][SUBJECT_CNT])
{
	char subjectName[SUBJECT_CNT][50] = { "국어 성적 : ","영어 성적 : ", "수학 성적 : " };
	int i, j;

	for ( i = 0; i <STUDENT_CNT ; i++){
	    printf("# %d번 학생 성명 입력 : ", i+1);
	    scanf("%s",name[i]);
	    j = 0;
	    while ( j < 3 ){
		score[i][j] = inputInt(subjectName[j]);
		if (score[i][j] >=0 && score[i][j] <= 100){
		    j++;
		}
	    }
	}

	return;
}

void updateData(char name[][NAME_LENGTH], int score[][SUBJECT_CNT])
{
	char subjectName[SUBJECT_CNT][50] = { "국어 성적 재입력 : ", "영어 성적 재입력 : ", "수학 성적 재입력 : " };
	int i,j;
	int flag = 0;
	char find[NAME_LENGTH];

	printf("# 수정할 학생성명 입력 : ");
	scanf("%s",find);

	for ( i = 0 ; i<STUDENT_CNT ; i++){
	    if ( strcmp(find, name[i]) == 0){
		flag = 1;
		break;
	    }
	}

	if ( flag == 0){
	    printf("Not found !!!\n");
	}
	else {
	    printf("#%s의 성적 재입력\n", find);
	    for ( j = 0; j < SUBJECT_CNT ; j++){
		printf("%s",subjectName[j]);
		scanf("%d",&score[i][j]);
	    }
	}

	return;
}

void outputData(char name[][NAME_LENGTH], int score[][SUBJECT_CNT])
{
    int i, j;
    int total=0;

    for ( i = 0 ; i < STUDENT_CNT ; i++){
	total = 0;
	printf("%d. %s ", i+1, name[i]);
	for ( j = 0 ; j < SUBJECT_CNT ; j++ ) {
	    total += score[i][j];
	    printf(" %d",score[i][j]); 
	}
	printf(" %d %.2lf\n",total, total /3.0);
    }

    return;
}

int inputInt(const char *message)
{
	int number, res;
	while (1) {
		printf(message);
		res = scanf("%d", &number);
		if (res == 1) {
			break;
		}
		else {
			myflush();
		}
	}
	return number;
}

void myflush(void) // 입력 버퍼 비우기 함수
{
	while (getchar() != '\n');
}

