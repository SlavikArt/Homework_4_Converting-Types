#include <iostream>

using namespace std;

int main()
{
	/* Пользователь вводит с клавиатуры стоимость одного ноутбука,
	их количество и процент скидки.
	Посчитать общую сумму заказа. */

	setlocale(0, "rus");

	float price;
	float order_price;

	int amount;
	int discount;

	cout << "Введите стоимость 1 ноутбука (грн): ";
	cin >> price;

	cout << "Введите их количество: ";
	cin >> amount;

	cout << "Процент скидки определится по количеству ноутбуков.\n";

	if (amount <= 5)
	{
		discount = 5;
	}
	else if (amount > 5 && amount <= 10)
	{
		discount = 10;
	}
	else if (amount > 10)
	{
		discount = 15;
	}

	order_price = (price * amount) - (price * amount * discount / 100);

	cout << "Ваш заказ обойдется вам в " << order_price << " грн., с учетом скидки в " << discount << "%\n";
}