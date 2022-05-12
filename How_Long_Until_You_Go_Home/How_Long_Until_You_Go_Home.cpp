#include <iostream>

using namespace std;

int main()
{
	/* Пользователь вводит с клавиатуры время в секундах,
	прошедшее с начала рабочего дня.
	Посчитать, сколько целых часов ему осталось сидеть на работе,
	если рабочий день составляет 8 часов. */

	setlocale(0, "rus");

	const int work_time = 8;

	float time_passed;

	int time_left;

	cout << "Введите сколько времени прошло (сек): ";
	cin >> time_passed;

	time_passed /= 3600; // Секунды в часы
	time_left = work_time - ceil(time_passed);

	cout << "Вам осталось: " << time_left << " ч.\n";
}