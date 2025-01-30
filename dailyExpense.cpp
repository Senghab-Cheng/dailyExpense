
#include <iostream>
#include <string>

#define setprecision

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
    cout << "|    Day              |            Spend       |" << endl;
    cout << "+==============================================+" << endl;

    for (int i = 0; i < totalOptions; i++) {
        cout << "|     " << days[i] << string(15 - days[i].length(), ' ')
             << "|       $" << fixed << setprecision(0) << arr[i] << "        |\t " << endl;
    }
    
    cout << "+==============================================+" << endl;
    cout << "|" << LIGHT_GREEN;
    cout << "   >>>  Daily Expense Summary <<< " << RESET;
    cout << "|         " << endl;
    cout << "+==============================================+" << endl;
}


int main() {
    system("clear");
    double arr[7];
    string DAY[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    for (int i = 0; i < 7; i++) {
        cout << "On " << DAY[i] << " Total spend of this day: $";
        cin >> arr[i];
    }
    
    titleOfDailyExpend(arr, DAY, 7);
      cout << "+============================================+" << endl;
      cout << "| "<< "The Hightest Expense: "<<  HIGHEST(arr, 7)<< "\t\t|" << endl;
      cout << "| "<< "The Lowest   Expense: "<<  LOWEST(arr, 7)<< " |" << endl;
      cout << "| "<< "The Average  Expense: "<<  AVERAGE       << " |" << endl;
      cout << "| "<< "The Average  Expense: "<<  SUM(arr, 7)   << " |" << endl;
      

      cout << "+=============================================+" << endl;
    
    
    return 0;
}
