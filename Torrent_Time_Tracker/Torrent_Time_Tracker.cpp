#include <iostream>

using namespace std;

int main()
{
	/* Пользователь вводит с клавиатуры размер одного фильма в гигабайтах
	(вещественное значение!) и скорость Интернет-соединения в битах в секунду.
	Определить, за какое время (часы, минуты и секунды) скачается фильм. */

	setlocale(0, "rus");

	float film_size; // Размер фильма в ГБ
	
	long long internet_speed_bps;  // Скорость в битах в секунду
	double internet_speed_gbs; // Скорость в гигабайтах в секунду
	int hours; // Часы
	int min;   // Минуты
	int sec;   // Секунды

	cout << "Введите размер фильма: ";
	cin >> film_size;

	cout << "Введите скорость Интернет-соединения (бит/с): ";
	cin >> internet_speed_bps;

	internet_speed_gbs = internet_speed_bps * 1.25E-10; // Бит/с в ГБ/с

	sec = ceil(film_size / internet_speed_gbs);

	hours = sec / 3600;
	min = (sec - hours * 3600) / 60;
	sec = sec - (hours * 3600 + min * 60);

	cout << "Фильм скачается через " << hours << " ч. " << min << " мин. " << sec << " сек.\n";
}