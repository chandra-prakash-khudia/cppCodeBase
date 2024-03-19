#include<bits/stdc++.h>

using namespace std;

// Main function to read billing information
int main() {
    string fileName = "supermarket_bill.txt";
    ifstream billFile(fileName);

    if (!billFile.is_open()) {
        cerr << "Error: Unable to open file " << fileName << endl;
        return 1;
    }

    cout << "Reading billing information from " << fileName << "..." << endl;
    string line;
    while (getline(billFile, line)) {
        cout << line << endl;
    }

    billFile.close();
    return 0;
}
