#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    /*
    cout << "Задание 1)\nHello World!\n\n"; //Задание 1
    
    cout << "Задание 2)\nВведите два числа:\n";
    int a, b;
    cin >> a >> b;
    cout << a + b << endl << endl; //Задание 2

    cout << "Задание 3)\nВведите два числа:\n";
    int x, y;
    cin >> x >> y;
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl << endl; //Задание 3

    cout << "Задание 4)\nВведите длину и ширину:\n";
    double c, d;
    cin >> c >> d;
    double P = 2 * (c + d);
    double S = c * d;
    cout << "Периметр: " << P << endl;
    cout << "Площадь: " << S << endl << endl; //Задание 4

    cout << "Задание 5)\nВведите три числа:\n";
    double e, f, g;
    cin >> e >> f >> g;
    double avg = (e + f + g) / 3.0;
    cout << avg << endl << endl; //Задание 5

    cout << "Задание 6)\nВведите кол-во секунд:\n";
    int s;
    cin >> s;
    int hours = s / 3600;
    int minutes = (s % 3600) / 60;
    int seconds = s % 60;
    cout << hours << ":" << minutes << ":" << seconds << endl << endl; //Задание 6

    cout << "Задание 7)\nВведите температуру в цельсиях:\n";
    const double K = 9.0 / 5.0;
    double C;
    cin >> C;
    double F = C * K + 32;
    cout << F << endl << endl; //Задание 7

    cout << "Задание 8)\nВведите радиус окружности:\n";
    const double PI = 3.14159;
    double r;
    cin >> r;
    double L = 2 * PI * r;
    double Sq = PI * r * r;
    cout << "Длина: " << L << endl;
    cout << "Площадь: " << Sq << endl << endl; //Задание 8

    cout << "Задание 9)\nВведите четырёхзначное число:\n";
    int n;
    cin >> n;
    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;
    int sum = d1 + d2 + d3 + d4;
    int prod = d1 * d2 * d3 * d4;
    cout << "Сумма: " << sum << endl;
    cout << "Произведение: " << prod << endl << endl; //Задание 9
    
    cout << "Задание 10)\nВведите поочерёдно ставку, часы и премию:\n";
    const double TAX = 0.13;
    double rate, hours, bonus;
    cin >> rate >> hours >> bonus;
    double accrued = rate * hours + bonus;
    double tax = accrued * TAX;
    double net = accrued - tax;
    cout << "Начислено: " << accrued << endl;
    cout << "Налог: " << tax << endl;
    cout << "На руки: " << net << endl << endl; //Задание 10
    */
    cout << "Задание 11)\nВведите девятизначное число:\n";
    long long l;
    cin >> l;
    // Извлекаем девять цифр
    int d1 = l / 100000000;
    int d2 = (l / 10000000) % 10;
    int d3 = (l / 1000000) % 10;
    int d4 = (l / 100000) % 10;
    int d5 = (l / 10000) % 10;
    int d6 = (l / 1000) % 10;
    int d7 = (l / 100) % 10;
    int d8 = (l / 10) % 10;
    int d9 = l % 10;
    // 1. Сумма цифр
    int sum = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + d9;
    // 2. Произведение цифр
    long long prod = 1LL * d1 * d2 * d3 * d4 * d5 * d6 * d7 * d8 * d9;
    // 3. Перевёртыш
    long long rev = 1LL * d9 * 100000000 + d8 * 10000000 + d7 * 1000000
        + d6 * 100000 + d5 * 10000 + d4 * 1000
        + d3 * 100 + d2 * 10 + d1;
    // 4. Знакочередующаяся сумма
    int alt = d1 - d2 + d3 - d4 + d5 - d6 + d7 - d8 + d9;
    // 5. Число из цифр на нечётных позициях
    int oddPos = d1 * 10000 + d3 * 1000 + d5 * 100 + d7 * 10 + d9;
    // 6. Палиндром (1 или 0) без оператора ==
    int pal = (!(d1 - d9)) * (!(d2 - d8)) * (!(d3 - d7)) * (!(d4 - d6));
    cout << sum << endl;
    cout << prod << endl;
    cout << rev << endl;
    cout << alt << endl;
    cout << oddPos << endl;
    cout << pal << endl << endl; //Задание 11

    return 0;
}

