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

    printf("������ �Է��ϼ���: ");
    scanf("%d", & score);

    if (PassOrFail(score))
        printf("�հ��Դϴ�!\n");
    else
        printf("���հ��Դϴ�.\n");

    return 0;
}
