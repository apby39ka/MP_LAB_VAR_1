#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

int main() {
    map<int, pair<string, double>> units = {
        {1, {"км", 1000.0}},
        {2, {"мили", 1609.344}},
        {3, {"метры", 1.0}},
        {4, {"футы", 0.3048}},
        {5, {"дюймы", 0.0254}}
    };

    cout << "Конвертер единиц длины:\n";
    cout << "1 - км\n";
    cout << "2 - мили\n";
    cout << "3 - метры\n";
    cout << "4 - футы\n";
    cout << "5 - дюймы\n\n";

    double value;
    int choice;

    cout << "Введите значение: ";
    cin >> value;

    cout << "Выберите исходную единицу измерения: ";
    cin >> choice;

    if (units.find(choice) == units.end()) {
        cout << "Ошибка: неизвестная единица измерения.\n";
        return 1;
    }

    double meters = value * units[choice].second;

    cout << "\nРезультат:\n";
    for (const auto& item : units) {
        if (item.first != choice) {
            cout << item.second.first << ": "
                << fixed << setprecision(6)
                << meters / item.second.second << endl;
        }
    }

    return 0;
}