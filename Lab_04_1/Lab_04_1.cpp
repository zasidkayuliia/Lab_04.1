#include <iostream>
#include <cmath>
using namespace std;

double expression(int N) {
    double result = 1.0; // Початкове значення добутку
    for (int i = N; i <= 16; i++) {
        result *= static_cast<double> (i * N) / (i * i + N * N);
    }
    return result;
}

int main() {
    int N;
    cout << "N: ";
    cin >> N;

    // 1. while
    double result_while = 1.0;
    int i = N;
    while (i <= 16) {
        result_while *= static_cast<double>(i * N) / (i * i + N * N);
        i++;
    }
    cout << "P = " << result_while << endl;

    // 2. do while
    double result_do_while = 1.0;
    i = N;
    do {
        result_do_while *= static_cast<double>(i * N) / (i * i + N * N);
        i++;
    } while (i <= 16);
    cout << "P = " << result_do_while << endl;

    // 3. for (n++)
    double result_for_inc = 1.0;
    for (int i = N; i <= 16; i++) {
        result_for_inc *= static_cast<double>(i * N) / (i * i + N * N);
    }
    cout << "P = "  << result_for_inc << endl;

    // 4. for (n--)
    double result_for_dec = 1.0;
    for (int i = 16; i >= N; i--) {
        result_for_dec *= static_cast<double>(i * N) / (i * i + N * N);
    }
    cout << "P = " << result_for_dec << endl;

    return 0;
}
