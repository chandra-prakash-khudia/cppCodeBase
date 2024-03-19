#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;
class Contact {
public:
    string name;
    string dob;
    string email;
    string place;

    // Constructor
    Contact(const string& n, const string& d, const string& e, const string& p)
        : name(n), dob(d), email(e), place(p) {}

    // Function to display contact details
    void displayContact() const {
        cout << "Name: " << name << "\nDOB: " << dob << "\nEmail: " << email << "\nPlace: " << place << "\n\n";
    }
};

class ContactManager {
private:
    vector<Contact> contacts;

public:
    // Function to add a new contact
    void addContact() {
        string name, dob, email, place;
        cout << "Enter Name: ";
        cin.ignore(); // To consume the newline character left by previous inputs
        getline(cin, name);
        cout << "Enter DOB: ";
        getline(cin, dob);
        cout << "Enter Email: ";
        getline(cin, email);
        cout << "Enter Place: ";
        getline(cin, place);

        contacts.emplace_back(name, dob, email, place);
        cout << "Contact added successfully!\n\n";
    }

    // Function to display all contacts
    void displayContacts() const {
        for (const auto& contact : contacts) {
            contact.displayContact();
        }
    }

    // Function to search for a contact based on a specific key
    void searchContacts(const std::string& key) const {
        for (const auto& contact : contacts) {
            if (contact.name.find(key) != string::npos ||
                contact.dob.find(key) != string::npos ||
                contact.email.find(key) != string::npos ||
                contact.place.find(key) != string::npos) {
                contact.displayContact();
            }
        }
    }

    // Function to sort contacts based on a specific key
    void sortContacts(const string& key) {
        if (key == "name") {
            sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b) {
                return a.name < b.name;
            });
        } else if (key == "dob") {
            sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b) {
                return a.dob < b.dob;
            });
        } else if (key == "email") {
            sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b) {
                return a.email < b.email;
            });
        } else if (key == "place") {
            sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b) {
                return a.place < b.place;
            });
        } else {
            cout << "Invalid key for sorting!\n";
        }
    }

    // Function to export contacts to a file
    void exportContacts(const string& filename) const {
        ofstream outFile(filename);
        if (outFile.is_open()) {
            for (const auto& contact : contacts) {
                outFile << contact.name << "," << contact.dob << "," << contact.email << "," << contact.place << "\n";
            }
            outFile.close();
            cout << "Contacts exported successfully!\n\n";
        } else {
            cerr << "Error opening file for export!\n";
        }
    }

    // Function to import contacts from a file
    void importContacts(const string& filename) {
        ifstream inFile(filename);
        if (inFile.is_open()) {
            string line;
            while (getline(inFile, line)) {
                istringstream iss(line);
                string name, dob, email, place;
                getline(iss, name, ',');
                getline(iss, dob, ',');
                getline(iss, email, ',');
                getline(iss, place, ',');
                contacts.emplace_back(name, dob, email, place);
            }
            inFile.close();
            cout << "Contacts imported successfully!\n\n";
        } else {
            cerr << "Error opening file for import!\n";
        }
    }
};

int main(){
    ContactManager contactManager;
    int choice;
    do {
        cout << "Contact Management System\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contacts\n";
        cout << "4. Sort Contacts\n";
        cout << "5. Export Contacts\n";
        cout << "6. Import Contacts\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                contactManager.addContact();
                break;
            case 2:
                contactManager.displayContacts();
                break;
            case 3: {
                string searchKey;
                cout << "Enter search key: ";
                cin.ignore();
                getline(std::cin, searchKey);
                contactManager.searchContacts(searchKey);
                break;}
            
            case 4: {
                string sortKey;
                cout << "Enter sort key (name, email, place): ";
                cin >> sortKey;
                contactManager.sortContacts(sortKey);
                break;}
            
            case 5: {
                string filename;
                cout << "Enter filename for export: ";
                cin.ignore();
                getline(cin, filename);
                contactManager.exportContacts(filename);
                break;
            }
            case 6: {
                string filename;
                cout << "Enter filename for import: ";
                cin.ignore();
                getline(cin, filename);
                contactManager.importContacts(filename);
                break;  
        }
        default :
        cout << "\nInvalid Choice! Try Again.";
        }
        } while (choice != 0);
        return 0;
        }
        