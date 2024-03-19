#include <iostream>
#include <string>
using namespace std;
bool is_valid_password(const string& password) {
    // Check the length of the password
    if (password.length() < 8) {
        throw invalid_argument("Password must be at least 8 characters long");
    }
    // Flags to track the presence of different character types
    bool has_upper = false;
    bool has_lower = false;
    bool has_digit = false;
    bool has_special = false;

    // Check each character in the password
    for (char c : password) {
        if (isupper(c)) {
            has_upper = true;
        } else if (islower(c)) {
            has_lower = true;
        } else if (isdigit(c)) {
            has_digit = true;
        } else {
            // You can define your own set of special characters
            if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*') {
                has_special = true;
            }
        }
    }
    // Check if all required character types are present
    if (!(has_upper && has_lower && has_digit && has_special)) {
        throw invalid_argument("Password must contain at least one uppercase letter, one lowercase letter, one digit, and one special symbol");
    }

    return true; // Password is valid
}
int main() {
    string password;
    try {
        cout << "Enter your password: ";
        cin >> password;

        is_valid_password(password);
        cout << "Password is valid." << endl;
    } catch ( const invalid_argument& e) {
        cerr << "Invalid Password: " << endl;
    }
}
