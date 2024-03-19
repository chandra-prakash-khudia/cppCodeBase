#include <iostream>
#include <vector>
using namespace std;
int josephus(vector<int>& array, int start, int k) {
    if (array.size() == 1) {
        return array[0];
    }
    // Calculate the position to eliminate.
    start = (start + k -1) % array.size();

    // Remove the person at the calculated position.
    array.erase(array.begin() + start);

    // Recursively call Josephus with the updated array.
    return josephus(array, start, k);
}

int main() {
    int N = 6;
    int K = 2;
    vector<int> people(N);
    for (int i = 0; i < N; ++i) {
        people[i] = i + 1;
    }
    int lastNumber = josephus(people, 0, K);
    cout << "The last remaining number is: " << lastNumber << endl;
}