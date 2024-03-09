#include <iostream>
#include <array>
using namespace std;
int main() {
    int n;
    cin >> n;
    array<int, 1000> numbers;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        if (numbers[i] <= 10) {
            cout << "A[" << i << "] = " << numbers[i] << endl;
        }
    }
    return 0;
}