
#include <iostream>
using namespace std;

struct Laptop {
    string brand;
    int ram;
    float price;
};

int main() {
    Laptop l;

    cout << "Enter laptop brand: ";
    cin >> l.brand;

    cout << "Enter RAM (GB): ";
    cin >> l.ram;

    cout << "Enter laptop price: ";
    cin >> l.price;

    cout << "\n--- Laptop Specifications ---" << endl;
    cout << "Brand: " << l.brand << endl;
    cout << "RAM: " << l.ram << " GB" << endl;
    cout << "Price: " << l.price << endl;

    return 0;
}

