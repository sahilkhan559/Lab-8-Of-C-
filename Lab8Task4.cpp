#include <iostream>
using namespace std;
struct Student {
    string name;
    int roll;
    float gpa;
};
int main() {
    Student s1, s2;
    cout << "--- Enter First Student Data ---" << endl;
    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter roll number: ";
    cin >> s1.roll;
    cout << "Enter GPA: ";
    cin >> s1.gpa;
    cout << "\n--- Enter Second Student Data ---" << endl;
    cout << "Enter name: ";
    cin >> s2.name;
    cout << "Enter roll number: ";
    cin >> s2.roll;
    cout << "Enter GPA: ";
    cin >> s2.gpa;
    cout << "\n--- GPA Comparison Result ---" << endl;
    if (s1.gpa > s2.gpa) {
        cout << s1.name << " has higher GPA." << endl;
        cout << "GPA: " << s1.gpa << endl;
    }
    else if (s2.gpa > s1.gpa) {
        cout << s2.name << " has higher GPA." << endl;
        cout << "GPA: " << s2.gpa << endl;
    }
    else {
        cout << "Both students have equal GPA" << endl;
    }

    return 0;
}

