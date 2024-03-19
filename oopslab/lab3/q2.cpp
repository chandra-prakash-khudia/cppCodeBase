#include <iostream>
using namespace std;
int sum(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += arr[i];
    }
    return result;
}

float sum(float arr[], int n, int precision = 6) {
    float result = 0.0f;
    for (int i = 0; i < n; i++) {
        result += arr[i];
    }
    return result;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    float floatArr[] = {1.123, 2.245, 3.345, 4.456, 5.567};

    int intSum = sum(intArr, 5);
    float floatSum = sum(floatArr, 5);

    cout << "Sum of integers: " << intSum << endl;
    cout << "Sum of floats: " << floatSum <<endl;
}
