#include <iostream>

using namespace std;

int getIntPart(float num) {
	int temp = num;
	return num;
}

float getFloatPart(float num) {
	int temp = num;
	num -= (float)temp;
	return num;
}

int main()
{
	/* Пользователь вводит с клавиатуры два дробных числа.
	Вывести на экран сумму целых частей и сумму дробных. */

	setlocale(0, "rus");

	float num1;
	float num2;

	int sum_int;
	float sum_float;

	cout << "Введите первое число: ";
	cin >> num1;
	
	cout << "Введите второе число: ";
	cin >> num2;
	
	sum_int = getIntPart(num1) + getIntPart(num2);
	sum_float = getFloatPart(num1) + getFloatPart(num2);

	cout << "Сумма целлых частей: " << sum_int << "\n";
	cout << "Сумма дробных частей: " << sum_float << "\n";
}