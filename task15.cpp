#include <iostream>
void monthAndSeason(int month)
{
	if (month == 1)
	{
		std::cout << "Месяц - Январь. Время года - Зима" << std::endl;
	}
	if (month == 2)
	{
		std::cout << "Месяц - Февраль. Время года - Зима" << std::endl;
	}
	if (month == 3)
	{
		std::cout << "Месяц - Март. Время года - Весна" << std::endl;
	}
	if (month == 4)
	{
		std::cout << "Месяц - Апрель. Время года - Весна" << std::endl;
	}
	if (month == 5)
	{
		std::cout << "Месяц - Май. Время года - Весна" << std::endl;
	}
	if (month == 6)
	{
		std::cout << "Месяц - Июнь. Время года - Лето" << std::endl;
	}
	if (month == 7)
	{
		std::cout << "Месяц - Июль. Время года - Лето" << std::endl;
	}
	if (month == 8)
	{
		std::cout << "Месяц - Август. Время года - Лето" << std::endl;
	}
	if (month == 9)
	{
		std::cout << "Месяц - Сентябрь. Время года - Осень" << std::endl;
	}
	if (month == 10)
	{
		std::cout << "Месяц - Октябрь. Время года - Осень" << std::endl;
	}
	if (month == 11)
	{
		std::cout << "Месяц - Ноябрь. Время года - Осень" << std::endl;
	}
	if (month == 12)
	{
		std::cout << "Месяц - Декабрь. Время года - Зима" << std::endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int month;
	std::cout << "Введите номер месяца" << std::endl;
	std::cin >> month;
	monthAndSeason(month);
	return 0;
}