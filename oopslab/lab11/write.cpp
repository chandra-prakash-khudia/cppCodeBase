#include<bits/stdc++.h>

using namespace std;

// Item class
class Item {
    string itemName;
    double price;
    int quantity;

public:
    Item(const string& iName, double p, int q) : itemName(iName), price(p), quantity(q) {}

    string getItemName() const { return itemName; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
};

// Customer class
class Customer {
private:
    string customerName;
    vector<Item> purchasedItems;

public:
    Customer(const string& cName) : customerName(cName) {}

    void addItems(const vector<Item>& items) {
        for (const Item& item : items) {
            purchasedItems.push_back(item);
        }
    }

    double calculateTotalCost() const {
        double totalCost = 0.0;
        for (const Item& item : purchasedItems) {
            totalCost += item.getPrice() * item.getQuantity();
        }
        return totalCost;
    }

    void displayPurchasedItems() const {
        cout << "Items purchased by: " << customerName << endl;
        cout << left << setw(20) << "Item" << setw(10) << "Price" << setw(10) << "Quantity" << setw(15) << "Total" << endl;
        cout << "-------------------------------------------------" << endl;
        for (const Item& item : purchasedItems) {
            cout << left << setw(20) << item.getItemName() << setw(10) << item.getPrice() << setw(10) << item.getQuantity()
                 << setw(15) << (item.getPrice() * item.getQuantity()) << endl;
        }
        cout << "-------------------------------------------------" << endl;
        cout << right << setw(55) << "Total: " << calculateTotalCost() << endl;
    }

    void generateBill(const string& fileName) const {
        ofstream billFile(fileName);
        if (!billFile.is_open()) {
            cerr << "Error: Unable to open file " << fileName << endl;
            return;
        }

        billFile << "Items purchased by: " << customerName << endl;
        billFile << left << setw(20) << "Item" << setw(10) << "Price" << setw(10) << "Quantity" << setw(15) << "Total" << endl;
        billFile << "-------------------------------------------------" << endl;
        for (const Item& item : purchasedItems) {
            billFile << left << setw(20) << item.getItemName() << setw(10) << item.getPrice() << setw(10) << item.getQuantity()
                     << setw(15) << (item.getPrice() * item.getQuantity()) << endl;
        }
        billFile << "-------------------------------------------------" << endl;
        billFile << right << setw(55) << "Total: " << calculateTotalCost() << endl;

        billFile.close();

        cout << "Bill generated successfully and saved to " << fileName << endl;
    }
};

// Main function
int main() {
    Customer customer("NIT Srinagar");
    vector<Item> items = {
        Item("Note Book", 50, 5),
        Item("Pen (5 No.)", 7, 25),
        Item("A4 Ream", 350, 10)
    };

    customer.addItems(items);
    customer.displayPurchasedItems();
    customer.generateBill("supermarket_bill.txt");

    return 0;
}
