//Лунёв Кирилл Александрович 4А.
//Нужно сделать приложение обратного отсчета.
//На входе задано число N, выведите числа от N до 1 в отдельных строках. 
//Кроме того, когда текущее число обратного отсчета кратно 5, приложение должно выводить «Beep».

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите число N: ";
    cin >> N;
    for (int i = N; i >= 1; i--) {
        cout << i;
        if (i % 5 == 0) {
            cout << " Beep";
        }
        cout << endl;
    }
    return 0;
}
