#include <iostream>
#include <locale.h>

#include "System.h"
#include "Client.h"
#include "Rent.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	// Client
	std::cout << "Введите ваш возраст. \n";
    std::cin >> age;

	// Rent
	discount = 10; // 10% скидка

	// System
	tracking = 1; // true||false

	if (age >= 18 && age <= 80) {
		std::cout << "Какой вы хотите выбрать парк самокатов?\n1.Парк самокатов #1\n2.Парк самокатов Яндекс\n";
		std::cout << "Цена за 1 километр в:\nПарк самокатов #1 равна 20 рублям. А в Парке самокатов Яндекс равна 35 рублям.";
		std::cout << "Выбор: ";
		std::cin >> scooter_park;
		switch (scooter_park)
		{
		case 1:
			switch (tracking) {
			case 0:
				std::cout << "Самокат не исправен!";
				break;
			case 1:
				std::cout << "Введите какую дистанцую хотите проехать в км. \n";
				std::cin >> distance;
				price = 20;

				int price_km = distance * price;
				int price_km_with_discount = price_km * (100 - discount) / 100;
				int discount_in_rub = price_km - price_km_with_discount;

				if (distance == 0) {
					std::cout << "Не может быть дистанции 0 км";
				}
				else if (distance <= 30) {
					std::cout << "Стоимость поездки без скидки: " << price_km << " Рублей.\nСкидка составляет: " << discount_in_rub
						<< " Рублей.\nИтого цена со скидкой: " << price_km_with_discount << " Рублей.";
				}
				else {
					std::cout << "Дистанция слишком большая!";
				}
			}
			break;
		case 2:
			switch (tracking) {
			case 0:
				std::cout << "Самокат не исправен!";
				break;
			case 1:
				std::cout << "Введите какую дистанцую хотите проехать в км. \n";
				std::cin >> distance;
				price = 35;

				int price_km = distance * price;
				int price_km_with_discount = price_km * (100 - discount) / 100;
				int discount_in_rub = price_km - price_km_with_discount;

				if (distance == 0) {
					std::cout << "Не может быть дистанции 0 км";
				}
				else if (distance <= 30) {
					std::cout << "Стоимость поездки без скидки: " << price_km << " Рублей.\nСкидка составляет: " << discount_in_rub
						<< " Рублей.\nИтого цена со скидкой: " << price_km_with_discount;
				}
				else {
					std::cout << "Дистанция слишком большая!";
				}
			}
			break;
		default:
			std::cout << "Такого парка самокатов нет!";
			break;
		}
	}
	else if (age < 18)
	{
		std::cout << "Вам нет 18 лет!";
	}
	else {
		std::cout << "Такого возраста не может быть!";
	}

}