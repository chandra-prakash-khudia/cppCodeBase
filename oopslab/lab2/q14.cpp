#include <iostream>
using namespace std;
void Hanoi(int n_disc, char source, char target, char auxiliary) {
    if (n_disc == 1) {
        cout << "Move disk from " << source << " to " << target << endl;
    } else {
        // Move (n_disc - 1) disks from source to auxiliary using target as the auxiliary peg.
        Hanoi(n_disc - 1, source, auxiliary, target);
        
        // Move the largest disk from source to target.
        cout << "Move disk from " << source << " to " << target << endl;
        
        // Move the (n_disc - 1) disks from auxiliary to target using source as the auxiliary peg.
        Hanoi(n_disc - 1, auxiliary, target, source);
    }
}

int main() {
    int n_disc = 3; // Change the number of disks as needed
    char source = 'A';
    char target = 'C';
    char auxiliary = 'B';

    cout << "Tower of Hanoi with " << n_disc << " disks:" << endl;
    Hanoi(n_disc, source, target, auxiliary);
}