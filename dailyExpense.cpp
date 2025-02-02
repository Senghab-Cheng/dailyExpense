#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#define LIGHT_PEACH "\033[38;5;223m"
#define RESET "\033[0m"
#define LIGHT_GREEN "\033[92m"

double HIGHEST(double arr[], int size) {
    double highest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }
    return highest;
}

double LOWEST(double arr[], int size) {
    double lowest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < lowest) {
            lowest = arr[i];
        }
    }
    return lowest;
}

double SUM(double arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double AVERAGE(double sum, int size) {
    return sum / size;
}

void titleOfDailyExpend(double arr[], string days[], int totalOptions) {
    cout << "===============================================+" << endl;
    cout << "|                                              |" << endl;
    cout << "|" << LIGHT_PEACH;
    cout << "        >>> DAILY EXPEND SYSTEM <<<           " << RESET;
    cout << "|" << endl;
    cout << "|                                              |" << endl;
    cout << "+==============================================+" << endl;
    cout << "+==============================================+" << endl;
    cout << "|    Day             |            Spend        |" << endl;
    cout << "+==============================================+" << endl;

    for (int i = 0; i < totalOptions; i++) {
        cout << "|     " << days[i] << string(15 - days[i].length(), ' ')
             << "|       $" << fixed << setprecision(2) << arr[i] << endl;
    }
}

int main() {
    system("cls");
    system("clear");
    double arr[7];
    string DAY[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int option;
    char anw;

    for (int i = 0; i < 7; i++) {
        cout << "On " << DAY[i] << " Total spend of this day: $";
        cin >> arr[i];
    }

    titleOfDailyExpend(arr, DAY, 7);

    double highest = HIGHEST(arr, 7);
    double lowest = LOWEST(arr, 7);
    double sum = SUM(arr, 7);
    double average = AVERAGE(sum, 7);

    do {
        cout << "+==============================================+" << endl;
        cout << "|" << LIGHT_GREEN;
        cout << "      >>>  Daily Expense Summary <<< " << RESET;
        cout << "         |         " << endl;
        cout << "+==============================================+" << endl;
        cout << "1. Total expenses." << endl;
        cout << "2. Average expense." << endl;
        cout << "3. Highest expense." << endl;
        cout << "4. Lowest expense. " << endl;
        cout << "5. All of the above. " << endl;
        cout << "Select an option: ";
        cin >> option;
                switch (option) {
            case 1:
                cout << "+==============================================+" << endl;
                cout << " Total Expense" << "\t" << "           $" << fixed << setprecision(2) << sum << endl;
                cout << "+==============================================+" << endl;
                break;
            case 2:
                cout << "+==============================================+" << endl;
                cout << " Average Expense" << "\t" << "  $ " << fixed << setprecision(2) << average << endl;
                cout << "+==============================================+" << endl;
                break;
            case 3:
                cout << "+==============================================+" << endl;
                cout << " Highest Expense" << "\t" << "   $" << fixed << setprecision(2) << highest << endl;
                cout << "+==============================================+" << endl;
                break;
            case 4:
                cout << "+==============================================+" << endl;
                cout << " Lowest Expense" << "\t" << "   $" << fixed << setprecision(2) << lowest << endl;
                cout << "+==============================================+" << endl;
                break;
            case 5:
                cout << "+==============================================+" << endl;
                cout << " Total Expense" << "\t" << "           $" << fixed << setprecision(2) << sum << endl;
                cout << " Average Expense" << "\t" << "   $" << fixed << setprecision(2) << average << endl;
                cout << " Highest Expense" << "\t" << "   $" << fixed << setprecision(2) << highest << endl;
                cout << " Lowest Expense" << "\t" << "        $" << fixed << setprecision(2) << lowest << endl;
                cout << "+==============================================+" << endl;
                break;
            default:
                cout << "Try again" << endl;
        }

        if (option >= 1 && option <= 5) {
            cout << "Do you want to check another option? (y/n): ";
            cin >> anw;
        } else {
            cout << endl;
        }
        system("cls");

    } while (anw == 'y' || (option > 6 && option < 0));

    return 0;
}