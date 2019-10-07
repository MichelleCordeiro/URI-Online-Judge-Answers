#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double r, volume;
    cin >> r;
    volume = (4.00/3.00) * 3.14159 * (r * r * r);
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;
    return 0;
}
