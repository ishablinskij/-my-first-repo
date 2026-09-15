/*Дана арифметическая прогрессия: a k = a k − 1 + d .
 * Вывести все члены этой прогрессии, кратные 3, которые лежат на отрезке [ a , b ] .
 * Числа a , b , d вводятся с клавиатуры( a 0 = a ).*/
#include <iostream>

using namespace std;

int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    int n = (b - a)/d + 1;
    for (int i = 1; i <= n; i++) {
        int an = (a + (i - 1) * d);
        if (an % 3 == 0) {
            cout << an << " ";
        }
    }
    return 0;
}

