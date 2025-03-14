#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct FoodItem {
    string name;
    double price;
};

struct Menu {
    FoodItem items[10]; // Fixed size array for menu items
    int itemCount;
};

struct Order {
    FoodItem items[10]; // Fixed size array for ordered items
    int itemCount;
    double total;
    
    Order() : itemCount(0), total(0) {}
    
    void addItem(FoodItem item, int quantity) {
        for (int i = 0; i < quantity; i++) {
            items[itemCount++] = item;
        }
        total += item.price * quantity;
    }

    double calculateTotal() {
        return total;
    }
};

struct Table {
    int tableNumber;
    bool isOccupied;
    Order currentOrder;

    Table(int num) : tableNumber(num), isOccupied(false) {}
    
    void assignOrder(Order order) {
        currentOrder = order;
        isOccupied = true;
    }

    void clearOrder() {
        currentOrder.itemCount = 0;
        currentOrder.total = 0;
        isOccupied = false;
    }
};

struct Restaurant {
    Table tables[5]; // Fixed size for 5 tables
    Menu breakfastMenu, lunchMenu, dinnerMenu, dasiMenu, italianMenu, mexicanMenu, chineseMenu;

  void  Restaurant() {
        for (int i = 0; i < 5; i++) {
            tables[i] = Table(i + 1);
        }

        // Initialize some items for each menu
        breakfastMenu.itemCount = 2;
        breakfastMenu.items[0] = {"Pancakes", 3.99};
        breakfastMenu.items[1] = {"Omelette", 4.99};

        lunchMenu.itemCount = 2;
        lunchMenu.items[0] = {"Burger", 5.99};
        lunchMenu.items[1] = {"Pizza", 8.49};

        dinnerMenu.itemCount = 2;
        dinnerMenu.items[0] = {"Steak", 12.99};
        dinnerMenu.items[1] = {"Pasta", 10.49};

        dasiMenu.itemCount = 3;
        dasiMenu.items[0] = {"Dasi Platter", 7.99};
        dasiMenu.items[1] = {"Dasi Biryani", 9.99};
        dasiMenu.items[2] = {"Dasi Samosa", 2.50};

        italianMenu.itemCount = 3;
        italianMenu.items[0] = {"Spaghetti", 10.99};
        italianMenu.items[1] = {"Lasagna", 12.99};
        italianMenu.items[2] = {"Pizza Margherita", 11.49};

        mexicanMenu.itemCount = 3;
        mexicanMenu.items[0] = {"Tacos", 8.99};
        mexicanMenu.items[1] = {"Burrito", 9.49};
        mexicanMenu.items[2] = {"Quesadilla", 7.99};

        chineseMenu.itemCount = 3;
        chineseMenu.items[0] = {"Sweet and Sour Chicken", 10.49};
        chineseMenu.items[1] = {"Kung Pao Chicken", 11.99};
        chineseMenu.items[2] = {"Spring Rolls", 4.99};
    }

    void addMenuItem(string name, double price, string category) {
        FoodItem newItem = {name, price};
        if (category == "Breakfast" && breakfastMenu.itemCount < 10) {
            breakfastMenu.items[breakfastMenu.itemCount++] = newItem;
        } else if (category == "Lunch" && lunchMenu.itemCount < 10) {
            lunchMenu.items[lunchMenu.itemCount++] = newItem;
        } else if (category == "Dinner" && dinnerMenu.itemCount < 10) {
            dinnerMenu.items[dinnerMenu.itemCount++] = newItem;
        } else if (category == "Dasi" && dasiMenu.itemCount < 10) {
            dasiMenu.items[dasiMenu.itemCount++] = newItem;
        } else if (category == "Italian" && italianMenu.itemCount < 10) {
            italianMenu.items[italianMenu.itemCount++] = newItem;
        } else if (category == "Mexican" && mexicanMenu.itemCount < 10) {
            mexicanMenu.items[mexicanMenu.itemCount++] = newItem;
        } else if (category == "Chinese" && chineseMenu.itemCount < 10) {
            chineseMenu.items[chineseMenu.itemCount++] = newItem;
        } else {
            cout << "Invalid category or menu full!" << endl;
        }
    }

    void displayMenu(Menu menu) {
        cout << "\nMenu: " << endl;
        for (int i = 0; i < menu.itemCount; i++) {
            cout << i + 1 << ". " << menu.items[i].name << " - $" << fixed << setprecision(2) << menu.items[i].price << endl;
        }
    }

    void takeOrder(int tableNum, int itemIndex, string category, int quantity) {
        if (tableNum < 1 || tableNum > 5) {
            cout << "Invalid table number!" << endl;
            return;
        }

        FoodItem selectedItem;
        if (category == "Breakfast") {
            selectedItem = breakfastMenu.items[itemIndex - 1];
        } else if (category == "Lunch") {
            selectedItem = lunchMenu.items[itemIndex - 1];
        } else if (category == "Dinner") {
            selectedItem = dinnerMenu.items[itemIndex - 1];
        } else if (category == "Dasi") {
            selectedItem = dasiMenu.items[itemIndex - 1];
        } else if (category == "Italian") {
            selectedItem = italianMenu.items[itemIndex - 1];
        } else if (category == "Mexican") {
            selectedItem = mexicanMenu.items[itemIndex - 1];
        } else if (category == "Chinese") {
            selectedItem = chineseMenu.items[itemIndex - 1];
        } else {
            cout << "Invalid category!" << endl;
            return;
        }

        Table &table = tables[tableNum - 1];
        if (!table.isOccupied) {
            cout << "Assigning order to table " << tableNum << endl;
            table.assignOrder(Order());
        }
        table.currentOrder.addItem(selectedItem, quantity);
    }

    void printBill(int tableNum) {
        if (tableNum < 1 || tableNum > 5) {
            cout << "Invalid table number!" << endl;
            return;
        }

        Table &table = tables[tableNum - 1];
        if (!table.isOccupied) {
            cout << "No orders placed for this table!" << endl;
            return;
        }

        double total = table.currentOrder.calculateTotal();
        double tax = total * 0.1;  // 10% tax
        double serviceCharge = total * 0.05;  // 5% service charge
        double finalTotal = total + tax + serviceCharge;

        cout << "\nBill for Table " << tableNum << endl;
        cout << "-----------------------" << endl;
        for (int i = 0; i < table.currentOrder.itemCount; i++) {
            cout << table.currentOrder.items[i].name << " - $" << fixed << setprecision(2) << table.currentOrder.items[i].price << endl;
        }
        cout << "-----------------------" << endl;
        cout << "Subtotal: $" << fixed << setprecision(2) << total << endl;
        cout << "Tax (10%): $" << fixed << setprecision(2) << tax << endl;
        cout << "Service Charge (5%): $" << fixed << setprecision(2) << serviceCharge << endl;
        cout << "-----------------------" << endl;
        cout << "Total: $" << fixed << setprecision(2) << finalTotal << endl;
    }

    void clearTable(int tableNum) {
        if (tableNum < 1 || tableNum > 5) {
            cout << "Invalid table number!" << endl;
            return;
        }
        Table &table = tables[tableNum - 1];
        table.clearOrder();
        cout << "Table " << tableNum << " has been cleared." << endl;
    }
};

// Function to display the main menu
void displayMainMenu() {
    cout << "\nRestaurant Management System" << endl;
    cout << "1. Display Breakfast Menu" << endl;
    cout << "2. Display Lunch Menu" << endl;
    cout << "3. Display Dinner Menu" << endl;
    cout << "4. Display Dasi Menu" << endl;
    cout << "5. Display Italian Menu" << endl;
    cout << "6. Display Mexican Menu" << endl;
    cout << "7. Display Chinese Menu" << endl;
    cout << "8. Add Menu Item" << endl;
    cout << "9. Take Order" << endl;
    cout << "10. Print Bill" << endl;
    cout << "11. Clear Table" << endl;
    cout << "12. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    Restaurant restaurant;

    int choice, tableNum, itemIndex, quantity;
    string category;

    do {
        displayMainMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                restaurant.displayMenu(restaurant.breakfastMenu);
                break;
            case 2:
                restaurant.displayMenu(restaurant.lunchMenu);
                break;
            case 3:
                restaurant.displayMenu(restaurant.dinnerMenu);
                break;
            case 4:
                restaurant.displayMenu(restaurant.dasiMenu);
                break;
            case 5:
                restaurant.displayMenu(restaurant.italianMenu);
                break;
            case 6:
                restaurant.displayMenu(restaurant.mexicanMenu);
                break;
            case 7:
                restaurant.displayMenu(restaurant.chineseMenu);
                break;
            case 8:
                string name;
                double price;
                cout << "Enter item name: ";
                cin >> name;
                cout << "Enter item price: ";
                cin >> price;
                cout << "Enter category (Breakfast, Lunch, Dinner, Dasi, Italian, Mexican, Chinese): ";
                cin >> category;
                restaurant.addMenuItem(name, price, category);
                break;
            case 9:
                cout << "Enter table number: ";
                cin >> tableNum;
                cout << "Enter category (Breakfast, Lunch, Dinner, Dasi, Italian, Mexican, Chinese): ";
                cin >> category;
                cout << "Enter menu item number: ";
                cin >> itemIndex;
                cout << "Enter quantity: ";
                cin >> quantity;
                restaurant.takeOrder(tableNum, itemIndex, category, quantity);
                break;
            case 10:
                cout << "Enter table number: ";
                cin >> tableNum;
                restaurant.printBill(tableNum);
                break;
            case 11:
                cout << "Enter table number: ";
                cin >> tableNum;
                restaurant.clearTable(tableNum);
                break;
            case 12:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 12);

    return 0;
}

