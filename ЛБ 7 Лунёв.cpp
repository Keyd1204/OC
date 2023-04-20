//Лунёв Кирилл Александрович 4А.
//Баланс фигурных скобок в файле

#include <iostream>
#include <fstream>
#include <stack>
#include <string>

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        return 1;
    }

    std::stack<char> brackets;
    bool isBalanced = true;
    char ch;

    while (inputFile.get(ch) && isBalanced) {
        if (ch == '{') {
            brackets.push(ch);
        } else if (ch == '}') {
            if (!brackets.empty()) {
                brackets.pop();
            } else {
                isBalanced = false;
            }
        }
    }

    if (!brackets.empty()) {
        isBalanced = false;
    }

    std::string result = isBalanced ? "Скобки сбалансированы." : "Скобки не сбалансированы.";

    std::cout << result << std::endl;
    outputFile << result << std::endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
