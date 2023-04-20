//Лунёв Кирилл Александрович 4А. 
//Билетная касса
#include <iostream>
#include <cmath>

int main() {
	const int TICKET_PRICE = 10; // Цена билета в долларах
	int ages[5]; // Массив для хранения возрастов пяти человек

	cout << "Введите возраст каждого человека через пробел: ";
	for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
	}

	// Вычисляем стоимость билетов с учетом скидки
	int total_price = 5 * TICKET_PRICE;
	if (youngest < 18) {
        total_price -= 2 * TICKET_PRICE;
	} else if (youngest > 64) {
        total_price -= TICKET_PRICE;
	}

	// Выводим общую стоимость билетов
	cout << "Общая стоимость билетов: " << total_price << " долларов\n";

	return 0;
}