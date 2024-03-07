#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= 12; i++) {
        if (N >= 1 && N <= 50) {
            cout << N << " * " << i << " = " << N * i << endl;
        }
    }
    return 0;
}