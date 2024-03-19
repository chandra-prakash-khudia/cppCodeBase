#include <iostream>
using namespace std;

int main() {
    int L=8, R=11;
    int servedCustomers = 0;
    int i = 1; 
    while (L >= i || R >= i) {
        if (L >= R) {
            L -= i;
        } else {
            R -= i;
        }
        i++;
        servedCustomers++;
    }
    
    cout << servedCustomers << " " << L <<" "<< R<< endl;
}
