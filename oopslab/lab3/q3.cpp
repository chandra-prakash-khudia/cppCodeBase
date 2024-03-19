#include <iostream>
#include <string>
using namespace std;
bool search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}
bool search(string arr[], int size, string key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}
bool search(string arr[], int size, string key, int flag) {
    if (flag == 0) {  // Search for a substring
        for (int i = 0; i < size; i++) {
            if (arr[i].find(key) != string::npos) {
                return true;
            }
        }
    } else if (flag == 1) {  // Search for a full string
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    string strArr[] = {"apple", "banana", "cherry", "date"};
    bool intResult = search(intArr, 5, 3);
    bool strResult = search(strArr, 4, "cherry");
    bool subStrResult = search(strArr, 4, "ban", 0);

    cout << "Search for integer 3: " << (intResult ? "Found" : "Not Found") << endl;
    cout << "Search for string 'cherry': " << (strResult ? "Found" : "Not Found") << endl;
    cout << "Search for substring 'ban': " << (subStrResult ? "Found" : "Not Found") << endl;

    return 0;
}