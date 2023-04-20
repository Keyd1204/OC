//Лунёв Кирилл Александрович 4А.
//Сортировка по номеру телефона в файле

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

struct Record {
    long long phone;
    std::string name;
    std::string address;
};

bool compare(const Record &a, const Record &b) {
    return a.phone < b.phone;
}

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        return 1;
    }

    std::vector<Record> records;
    Record tempRecord;

    while (inputFile >> tempRecord.phone) {
        inputFile.ignore();
        std::getline(inputFile, tempRecord.name);
        std::getline(inputFile, tempRecord.address);
        records.push_back(tempRecord);
    }

    std::sort(records.begin(), records.end(), compare);

    for (const auto &record : records) {
        outputFile << record.phone << "\n" << record.name << "\n" << record.address << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
