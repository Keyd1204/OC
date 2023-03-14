//Лунёв Кирилл Александрович 4А.
//Напишите функцию, которая возвращает true, если заданное число является палиндромом, и false, если нет. 
#include <iostream>
#include <string>
 
using namespace std;

bool isPalindrome(int num) {
    string str = to_string(num);
    int i = 0;
    int j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    int num;
    cout << "Введите число: ";
    cin >> num;
    if (isPalindrome(num)) {
        cout << num << " является палиндромом." << endl;
    } else {
        cout << num << " не является палиндромом." << endl;
    }
    return 0;
}