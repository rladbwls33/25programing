#include<stdio.h>
#include<conio.h>


int PassOrFail(int score) 
{
if (score >= 50)
    return 1;
else
    return 0;
}

int main() {
    int score;

    printf("점수를 입력하세요: ");
    scanf("%d", & score);

    if (PassOrFail(score))
        printf("합격입니다!\n");
    else
        printf("불합격입니다.\n");

    return 0;
}
