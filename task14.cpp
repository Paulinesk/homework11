#include <iostream>
void countPrice(int price, int time, int day) // ??????? ?-?, ??????????? 3 ????? ???? int ? ?????????????? ????????? ??????????? ? ??????????? ?? ??? ??????
{
	int result, cost;
	result = price * time; // ????????? ??????????? ??? ??????
	if (day == 6 || day == 7) // ???? ?????????? ? ??????? ? ???????????
	{
	cost = result * (1 - 0.2); // ????????? ??????????? ?? ??????? 20% ? ???????(6) ? ???????????(7)
	std::cout << "????????? ??????????? ?? ??????? 20%: " << cost << std::endl;
	}
	else
	{
	std::cout << "????????? ???????????: " << result << std::endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian"); // ?????????? ?-? setlocale ??? ????????? ???????? ?????
	int price, time, day; // ????????? ??????????
	std::cout << "??????? ????????? ??????" << std::endl;
	std::cin >> price; // ???? ????????? ?????? ??????????? ? ??????????
	std::cout << "??????? ?????????? ?????, ??????????? ??? ???????????" << std::endl;
	std::cin >> time; // ???? ???-?? ????? ??????????? ? ??????????
	std::cout << "??????? ???? ?????? ??????(1 - ???????????, ..., 7 - ???????????) " << std::endl;
	std::cin >> day; // ???? ??? ?????? ??????????? ? ??????????
	countPrice(price, time, day); // ????? ?-???? ???????? ????????? ??????????? ? ??????????? ?? ????????? ????????
	return 0;
}