#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, maiorAB, maiorXC;
    cin >> a >> b >> c;
    maiorAB = (a + b + abs(a - b)) / 2;
    maiorXC = (maiorAB + c + abs(maiorAB - c)) / 2;
    cout << maiorXC << " eh o maior" << endl;
    return 0;
}
