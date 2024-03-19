#include <iostream>
#include <vector>
using namespace std;
class Item {
private:
    string name;
    int stock;
    double price;
    bool canShip;
public:
    Item(const string& nam, int stoc, double pric, bool canShi) {
        name = nam;
        stock = stoc;
        price = pric;
        canShip = canShi;
    }
    string getName() {
        return name;
    }
    int getStock() {
        return stock;
    }
    double getPrice() {
        return price;
    }
    bool canBeShipped() {
        return canShip;
    }
    void purchase(int quantity) {
        if (quantity < 2) {
            throw invalid_argument("Invalid quantity. Please select at least 2 items.");
        }
        if (quantity > stock) {
            throw invalid_argument("Item is out of stock.");
        }
        if (!canShip) {
            throw invalid_argument("Item cannot be shipped to the selected location.");
        }
        stock -= quantity;
    }
};
class ShoppingCart {
public:
    void addItem(Item& item, int quantity) {
        try {
            item.purchase(quantity);
            items.push_back({ item, quantity });
            cout << "Item added to the cart: " << item.getName() << " x" << quantity << endl;
        }
        catch (const invalid_argument& e) {
            cerr << "Error: "<<e.what()<< endl;
        }
    }
    void removeItem(Item& item, int quantity) {
        bool itemFound = false;
        for (int i = 0; i < items.size(); ++i) {
            if (items[i].first.getName() == item.getName()) {
                itemFound = true;
                try {
                    items[i].first.purchase(-quantity);
                    items[i].second -= quantity;
                    if (items[i].second <= 0) {
                        items.erase(items.begin() + i);
                    }
                    cout << "Item removed from the cart: " << item.getName() << " x" << quantity << endl;
                }
                catch (const invalid_argument& e) {
                    cerr << "Error: " << e.what() << endl;
                }
                break;
            }
        }

        if (!itemFound) {
            cerr << "Error: Item not found in the cart." << endl;
        }
    }

    void purchaseItems() {
        double totalCost = 0.0;
        for (auto& item : items) {
            totalCost += item.first.getPrice() * item.second;
        }
        cout << "Total cost: $" << totalCost << endl;
        items.clear();
    }

private:
    vector<pair<Item, int>> items;
};
int main() {
    Item item1("Laptop", 5, 800.0, true);
    Item item2("Phone", 0, 400.0, true);
    Item item3("Camera", 10, 300.0, false);
    ShoppingCart cart;
    cart.addItem(item1, 2);  // Adding 2 laptops to the cart
    cart.addItem(item2, 1);  // Adding 1 phone to the cart (should trigger an error)
    cart.removeItem(item1, 1);  // Removing 1 laptop from the cart
    cart.addItem(item3, 1);  // Adding 1 camera to the cart (should trigger an error)
    cart.purchaseItems();  // Purchasing the items in the cart
}
