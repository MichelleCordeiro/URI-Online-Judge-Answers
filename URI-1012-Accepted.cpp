#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, C, triang, circ, trap, quad, ret;
    cin >> A >> B >> C;
    triang = (A * C) / 2;
    circ = 3.14159 * C *C;
    trap = ((A + B) * C) / 2;
    quad = B * B;
    ret = A * B;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triang << endl;
    cout << "CIRCULO: " << circ << endl;
    cout << "TRAPEZIO: " << trap << endl;
    cout << "QUADRADO: " << quad << endl;
    cout << "RETANGULO: " << ret << endl;
    return 0;
}
