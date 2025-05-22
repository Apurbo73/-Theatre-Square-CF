#include <iostream>
using namespace std;

int main() {
    long long n, m, z, a, b;
    cin >> n >> m >> z;

    if (n % z == 0) {
        a = n / z;
    } else {
        a = (n / z) + 1;
    }

    if (m % z == 0) {
        b = m / z;
    } else {
        b = (m / z) + 1;
    }

    cout << a * b << endl;
    return 0;
}
