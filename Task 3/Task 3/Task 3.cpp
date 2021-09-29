#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long N, K;
    cout << "Enter N: ";
    cin >> N;
    cout << "Enter K: ";
    cin >> K;

    int nLength = floor(log10(N)) + 1;

    if (K == nLength) {
        cout << N << endl;
        return 0;
    }

    int* digits = new int[nLength];
    int counter = nLength - 1;
    while (N > 0) {
        digits[counter] = N % 10;
        N /= 10;
        counter--;
    }

    int currentMultiplier = 1, result = 0;
    for (int i = K - 1; i >= 0; i--) {
        result += digits[i] * currentMultiplier;
        currentMultiplier *= 10;
    }

    delete[] digits;
    cout << result << endl;
    return 0;
}