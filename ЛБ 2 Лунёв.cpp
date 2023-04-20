//Лунёв Кирилл Александрович 4А. 
//Перевозка пассажиров
#include <iostream>
#include <cmath>

int main() {
	const int BUS_CAPACITY = 50; // вместимость автобуса
	int passengers; // количество пассажиров, ожидающих на автовокзале

	cout << "Введите количество пассажиров, ожидающих на автовокзале: ";
	cin >> passengers;

	int lastBusSeats = passengers % BUS_CAPACITY; // количество свободных мест в последнем автобусе
	cout << "В последнем автобусе будет " << lastBusSeats << " свободных мест." << endl;

	return 0;
}
