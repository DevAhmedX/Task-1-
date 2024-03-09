#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int lowest = 1e6 + 1;
    int position = -1;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num < lowest) {
            lowest = num;
            position = i + 1;
        }
    }
    cout << lowest << " " << position << endl;
    return 0;
}