// // Daily Expense Tracker
// // Create a program to allow users input daily expense,
// // analyze the data, and display the data in summary by
// // including:
// // Total Expense: Sum all expenses.
// // Average Expense: Divide the total by the number of
// // days.
// // Highest Expense
// // Lowest Expense



// #include <iostream>
// #include <string> 

// using namespace std;
// #define LIGHT_PEACH "\033[38;5;223m"
// #define RESET "\033[0m" 
// #define LIGHT_GREEN "\033[92m"

// enum KEY { UP = 72, DOWN = 80, ENTER = 13 }; // Arrow keys and Enter key
// void setConsoleTextColor(int color) {
//     // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
// }



// void titileOfDailyExpend(int currentSelection, int totalOptions) { cout << "===============================================+" << endl;
//     cout << "|                                                                                                 |" << endl;
//     cout << "|"; cout << LIGHT_PEACH; 
//     cout << "                                   >>> DAILY EXPEND SYSTEM <<<                                     ";cout << RESET;
//     cout << "|" << endl;
//     cout << "|                                                                                                 |" << endl;
//     cout << "+=================================================================================================+" << endl;
//     cout << "|                                                                                                 |" << endl;
   
//          string options[] = {
//         "TotalExpense",
//         "averageExpense",
//         "HighestExpense",
//         "lowestExpense";
//     };
//     for (int i = 0; i < totalOptions; i++) {
//             if (i == currentSelection) {
//                 setConsoleTextColor(15); // Bold (White text on black background)
//                 cout << "|  =>    " << options[i] << string(62 - options[i].length(), ' ') << "                           |" << endl;
//             } if{
//                 setConsoleTextColor(8); // Normal (Gray text on black background)
//                 cout << "|        " << options[i] << string(62 - options[i].length(), ' ') << "                           |" << endl;
//     }if
//         }

//     setConsoleTextColor(7);
//     cout << "|                                                                                                 |" << endl;
//     cout << "+=================================================================================================+" << endl;
//     cout << "|";cout << LIGHT_GREEN;
//     cout << "                          >>>  Select an option by pressing Enter  <<<                           " cout << RESET;
//     cout << "|" << endl;
//     cout << "+=================================================================================================+" << endl;


//     void TotalEx
    
// }
// int main(){
//     system("cls");  
//     // titileOfDailyExpend(sint currentSelection, int totalOption);
//     string days;
//     return 0;
// }