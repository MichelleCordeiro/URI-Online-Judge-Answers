#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(4);
    double raio, area, n = 3.14159;
    cin >> raio;
    area = n * (raio * raio);
    cout << "A=" << area << endl;
    return 0;
}
