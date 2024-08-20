#include <iostream>

using namespace std;

void showMenu() {
    cout << "\nSelect the unit of the temperature you will enter:\n";
    cout << "1. Celsius\n";
    cout << "2. Fahrenheit\n";
    cout << "3. Kelvin\n";
    cout << "0. Exit\n";
}

double convertTemperature(double temperature, int givenUnit, int convertedUnit) {
    switch (givenUnit) {
        case 1:
            switch (convertedUnit) {
                case 1:
                    return temperature;
                case 2:
                    return (temperature * 9/5) + 32;
                case 3:
                    return temperature + 273.15;
                default:
                    return -1;
            }
        case 2:
            switch (convertedUnit) {
                case 1:
                    return (temperature - 32) * 5/9;
                case 2:
                    return temperature;
                case 3:
                    return (temperature - 32) * 5/9 + 273.15;
                default:
                    return -1;
            }
        case 3:
            switch (convertedUnit) {
                case 1:
                    return temperature - 273.15;
                case 2:
                    return (temperature - 273.15) * 9/5 + 32;
                case 3:
                    return temperature;
                default:
                    return -1;
            }
        default:
            return -1;
    }
}

int main() {
    int givenUnit, convertedUnit;
    double temperature;
    char choice;
    const int MAX_CONVERSIONS = 100;
    double conversionResults[MAX_CONVERSIONS];
    int conversionCount = 0;

    do {
        showMenu();
        cout << "Enter your choice (0 to exit): ";
        cin >> choice;

        if (choice == '0') {
            cout << "\nExiting the temperature converter.\n";
            break;
        }

        givenUnit = choice - '0';
        if (givenUnit < 1 || givenUnit > 3) {
            cout << "Invalid unit selection.\n";
            continue;
        }

        cout << "\nEnter the temperature value: ";
        cin >> temperature;

        showMenu();
        cout << "\nSelect the unit to convert the temperature to:\n";
        cin >> convertedUnit;

        if (convertedUnit < 1 || convertedUnit > 3) {
            cout << "Invalid unit selection.\n";
            continue;
        }

        double convertedTemperature = convertTemperature(temperature, givenUnit, convertedUnit);
        if (convertedTemperature == -1) {
            cout << "Invalid conversion selection.\n";
        } else {
            cout << "\n###############################\n";
            cout << "Converted temperature: " << convertedTemperature << endl;
            cout << "###############################\n\n";
            if (conversionCount < MAX_CONVERSIONS) {
                conversionResults[conversionCount] = convertedTemperature;
                conversionCount++;
            } else {
                cout << "Maximum number of conversions reached.\n";
            }
        }
    } while (true);

    cout << "\nAll conversion results:\n";
    for (int i = 0; i < conversionCount; i++) {
        cout << conversionResults[i] << endl;
    }

    return 0;
}
