#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    int x;
    cin >> x;
    int position = -1;
    for (int i = 0; i < n; ++i) {
        if (numbers[i] == x) {
            position = i;
            break;  
        }
    }
    cout << position << endl;

    return 0;
}