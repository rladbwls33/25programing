#include <stdio.h>
#include <Windows.h>

void gotoXY(int x, int y)
{
    COORD pos = { x,y };
    pos. X = x;
    pos. Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

int main() {
    gotoXY(10,10);
    // ������ �ؽ�Ʈ
    printf("\033[34m�� �ؽ�Ʈ�� �������Դϴ�.\033[0m\n");

    // �ʷϻ� �ؽ�Ʈ�� ����� ���
    puts("\033[33m\033[45m�� �ؽ�Ʈ�� �ʷϻ��̰� ����� ������Դϴ�.\033[0m\n");

    // ���� �ؽ�Ʈ�� �Ķ��� �ؽ�Ʈ
    puts("\033[1m\033[34m�� �ؽ�Ʈ�� ���� �Ķ����Դϴ�.\033[0m\n");

    return 0;

}