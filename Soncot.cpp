#include <iostream>

using namespace std;

int main() {
    int n, k, result;
    cin >> n >> k;
    result = k;
    for (int i = 1; i < n; i++) {
        result *= (k - 1);
    }
    cout << result;
}