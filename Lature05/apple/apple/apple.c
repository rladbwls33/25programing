#include<stdio.h>
#include<conio.h>

int main()
{
	char c;
	c = _getch();
	if (c == 'u')
	{
		printf("\033[;44;1m�����Դϴ�!\033[0m");
	}
	else
	{
		printf("\033[;41m�߻� �ƴϿ�!\033[0m");
	}
	return 0;
}