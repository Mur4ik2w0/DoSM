#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Введите размер массива N (2..15): ";
    cin >> N;

    while (N < 2 || N > 15) {  // контроль корректности размера массива
        cout << "Ошибка. Введите N от 2 до 15: ";
        cin >> N;
    }

    vector<int> arr(N);  // массив создаётся после ввода размера

    for (int i = 0; i < N; i++) {
        cout << "Введите arr[" << i << "] (|x| <= 100): ";
        cin >> arr[i];

        while (arr[i] < -100 || arr[i] > 100) {  // контроль диапазона элемента
            cout << "Ошибка. Повторите ввод arr[" << i << "]: ";
            cin >> arr[i];
        }
    }

    cout << "Исходный массив: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";  // вывод исходных данных
    }
    cout << endl;

    for (int i = 0; i < N - 1; i++) {          // внешний цикл: не более N-1 проходов
        for (int j = 0; j < N - 1 - i; j++) {  // внутренний цикл: сравнение соседних элементов
            if (arr[j] < arr[j + 1]) {         // для убывания меняем, если текущий меньше следующего
                int temp = arr[j];             // обмен значений
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Отсортированный массив по убыванию: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";  // вывод результата
    }
    cout << endl;

    return 0;
}