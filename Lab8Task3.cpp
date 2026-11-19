
#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

int main() {
    Rectangle r;

    cout << "Enter rectangle length: ";
    cin >> r.length;

    cout << "Enter rectangle width: ";
    cin >> r.width;

    float area = r.length * r.width;
    float perimeter = 2 * (r.length + r.width);

    cout << "\n--- Rectangle Information ---" << endl;
    cout << "Length: " << r.length << endl;
    cout << "Width: " << r.width << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}

