#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    for (int i = 0; i < n; ++i) {
        if (numbers[i] > 0) {
            numbers[i] = 1;
        }
        else if (numbers[i] < 0) {
            numbers[i] = 2;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}