#include <iostream>

#define MODE 1

#ifndef MODE
#error MODE_NOT_DEFINE.
#endif

int main()
{
	setlocale(LC_ALL, "Russian");

#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	int add(int a, int b); {
		int a, b;
		std::cout << "Введите два числа" << std::endl;
		std::cin >> a >> b;
		a += b;
		std::cout << "Результат сложения: " << a << std::endl;
	}
	add;
#else
	std::cout << "Неизвестный режим. Завершение работы." << std::endl;
	return 0;
#endif
	return 0;
}

