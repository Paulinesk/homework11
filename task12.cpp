#include <iostream>
void advice(int weight, int height) // создаем ф-ю, принимающую 2 числа типа int в качестве аргумента и вычисл€ющую идеальный вес на основе роста и веса
{
	int iWeight = 0;
	iWeight = height - 100;
	if (weight < iWeight) // введенный вес меньше идеального веса
	{
		std::cout << "¬ам следует поправитьс€ до идеального веса. " << "¬аш идеальный вес: " << iWeight << std::endl;
	}
	if (weight > iWeight) // введенный вес больше идеального веса
	{
		std::cout << "¬ам следует похудеть до идеального веса. " << "¬аш идеальный вес: " << iWeight << std::endl;
	}
	if (weight == iWeight) // введенный вес равен идеальному
	{
		std::cout << "¬аш идеальный вес: " <<iWeight << " ¬аш вес равен идеальному весу. “ак держать!"  << std::endl;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian"); // использование ф-и setlocale дл€ установки русского €зыка
	int weight, height; // объ€вл€ем переменные
	std::cout << "¬ведите свой рост (целое число)" << std::endl;
	std::cin >> height; // ввод роста с клавиатуры
	std::cout << "¬ведите свой вес (целое число)" << std::endl;
	std::cin >> weight; // ввод веса с клавиатуры
	advice(weight, height); // выхов ф-и дл€ подсчета идеального веса на основе полученных данных
	return 0;
}
