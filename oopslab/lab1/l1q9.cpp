#include <iostream>
using namespace std;

int sum(int num) {
    int add = 0;
    while (num > 0) {
        int digit = num % 10;
        add += digit * digit;
        num /= 10;
    }
    return add;
}

bool HappyNumber(int N) {
    int Count = 0;
    while (N != 1 && Count < 1000) {
        N = sum(N);
        Count++;
    }
    return N == 1;
}

int main() {
    int N;
    cout << "Enter an integer: ";
    cin >> N;

    if (HappyNumber(N)) {
        cout << N << " is a Happy Number." <<endl;
    } else {
        cout << N << " is not a Happy Number." <<endl;
    }
    return 0;
}