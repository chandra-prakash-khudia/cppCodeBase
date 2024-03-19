#include <iostream>
using namespace std;
void printShape(int side, char symbol = '*') {
    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
           cout << symbol;
        }
        cout << endl;
    }
}

void printShape(int width, int height, char symbol = '*') {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) {
            cout << " "; // Print spaces for the parallelogram's offset
        }
        for (int j = 0; j < width; j++) {
            cout << symbol;
        }
        cout << endl;
        
    }
}

int main() {
    cout << "Square:" << endl;
    printShape(5); 

    cout << "\nParallelogram:" << endl;
    printShape(4, 6); 
}