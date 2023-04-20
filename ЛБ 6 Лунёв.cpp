//Лунёв Кирилл Александрович 4А.
//Очередь

#include <iostream>
#include <vector>

class Queue {
private:
    std::vector<int> queue;

public:
    // Конструктор
    Queue() {}

    // Добавление элемента в конец очереди
    void add(int value) {
        queue.push_back(value);
    }

    // Удаление первого элемента очереди
    void remove() {
        if (!queue.empty()) {
            queue.erase(queue.begin());
        } else {
            std::cout << "Очередь пуста." << std::endl;
        }
    }

    // Вывод содержимого очереди
    void print() const {
        if (!queue.empty()) {
            for (const auto& item : queue) {
                std::cout << item << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Очередь пуста." << std::endl;
        }
    }
};

int main() {
    Queue q;

    q.add(1);
    q.add(2);
    q.add(3);
    q.print();  // вывод: 1 2 3

    q.remove();
    q.print();  // вывод: 2 3

    q.remove();
    q.remove();
    q.print();  // вывод: Очередь пуста.

    return 0;
}
