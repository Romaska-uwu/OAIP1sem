#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k,m;
	puts("Вы любите шоколад?(1-да, 0-нет)");
	std::cin >> k;
	switch (k)
	{
		case 1: { puts("Какой ваш любимый шоколад? (1 - Молочный , 2 - Черный, 3 - Белый)");
			std::cin >> m;
			switch (m)
			{
				case 1: puts("Прекрасный выбор!"); break;
				case 2: puts("Так ты получается экстремал."); break;
				case 3: puts("Не думаю что шоколад с менее чем 20% какао масла и порошка можно считать шоколадом "); break;
				default: puts("Некоректный ответ"); break;
			}
			break;
		}
		case 0: puts("*Вы напугали автора*"); break;
		default: puts("Некоректный ответ"); break;
	}
	return 0;
}