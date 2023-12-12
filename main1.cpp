#include <iostream>
using namespace std;

double convertToMeters(double value, string unit) {
    if (unit == "inch")
        return value * 0.0254;  // conversie inch -> metri
    else if (unit == "feet")
        return value * 0.3048;  // conversie feet -> metri
    else if (unit == "mile")
        return value * 1609.34; // conversie mile -> metri
    else if (unit == "yard")
        return value * 0.9144; // conversie yard -> metri
    else {
        cout << "Unitate necunoscuta!";
        return -1; // în caz de unitate necunoscută
    }
}

int main() {
    double value;
    string unit;

    cout << "Introduceti valoarea: ";
    cin >> value;
    cout << "Introduceti unitatea (inch, feet, mile, yard): ";
    cin >> unit;

    double result = convertToMeters(value, unit);
    if (result != -1)
        cout << value << " " << unit << " este egal cu " << result << " metri." << endl;

    return 0;
}
