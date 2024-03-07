#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double x, p;
    cin >> x >> p;
    double original_price = (p * 100) / (100 - x);
    cout << fixed << setprecision(2) << original_price;
    return 0;
}