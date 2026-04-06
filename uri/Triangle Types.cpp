#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    double a, b, c;
    cin >> a >> b >> c;

    double decend[] = {a, b, c};
    sort(decend, decend + 3, greater<double>());

    double x = decend[0];
    double y = decend[1];
    double z = decend[2];

    if (x >= y + z) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (x * x == y * y + z * z)
            cout << "TRIANGULO RETANGULO" << endl;
       else if (x * x > y * y + z * z)
            cout << "TRIANGULO OBTUSANGULO" << endl;
       else  if (x * x < y * y + z * z)
            cout << "TRIANGULO ACUTANGULO" << endl;

        if (x == y && y == z && x==z)
            cout << "TRIANGULO EQUILATERO" << endl;
        else  if (x == y || y == z  )
            cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
