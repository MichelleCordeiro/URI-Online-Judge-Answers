#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string nome;
    double salario, vendas, total;
    cin >> nome >> salario >> vendas;
    total = salario + (vendas * 0.15);
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;
    return 0;
}
