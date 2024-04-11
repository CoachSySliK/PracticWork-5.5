#include <iostream>

using namespace std;

int main()
{
    int a, b, c, m, n, k;

    cout << "Введите размеры первой коробки:\n";
    cin >> a >> b >> c;

    cout << "Введите размеры второй коробки:\n";
    cin >> m >> n >> k;

    if (m < a && n < b && k < c || n < a && k < b && m < c || k < a && m < b && n < c || m < a && k < b && n < c || n < a && m < b && k < c || k < a && n < b && m < c) {
        cout << "Вторая коробка помещается в первую\n";
    }
    else {
        cout << "Вторая коробка НЕ помещается в первую\n";
    }

    return 0;
}
