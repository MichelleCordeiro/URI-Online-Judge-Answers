#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int num, horas;
    float v_hora;
    cin >> num >> horas >> v_hora;
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << horas * v_hora << endl;
    return 0;
}
