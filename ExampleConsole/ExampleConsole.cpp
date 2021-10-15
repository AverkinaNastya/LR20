#include <iostream>
#include "Triangles.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, ".1251");
    double A = 5.4, b = 30, c = 45;
    cout << "A = 5.4, b = 30, c = 45" << endl;
    cout << "Периметр = " << TrianglesFuncs::MyTrianglesFuncs::Perimeter(A, b, c) << endl;
    cout << "Площадь = " << TrianglesFuncs::MyTrianglesFuncs::Area(A, b, c) << endl;
    A = 9.4, b = 30, c = 165;
    cout << "\nВыполнение при неверно заданных данных: A = 9.4, b = 30, c = 165" << endl;
    try {
        cout << "Периметр = " << TrianglesFuncs::MyTrianglesFuncs::Perimeter(A, b, c) << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Ошибка: " << e.what() << endl;
    }
    try {
        cout << "Площадь = " << TrianglesFuncs::MyTrianglesFuncs::Area(A, b, c) << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Ошибка: " << e.what() << endl;
    }
}
