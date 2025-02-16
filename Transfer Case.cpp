#include <iostream>
#include <windows.h> // For Sleep function

using namespace std;

int main() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int driveTrain;

    cout << "Transfer Case Utility" << endl;
    cout << "=====================" << endl;

    while (true) { // Infinite loop to keep the program running
        cout << endl;
        cout << "1. 2H | 2. 4H | 3. 4L ";
        cin >> driveTrain;

        if (driveTrain == 1) {
            cout << endl;
            SetConsoleTextAttribute(hConsole, 3);
            cout << "4x4 Shift in Progress";
            SetConsoleTextAttribute(hConsole, 7);
            Sleep(4000); // Pause for 4 seconds
            cout << endl << endl;
            SetConsoleTextAttribute(hConsole, 6);
            cout << "4x2" << endl;
            SetConsoleTextAttribute(hConsole, 7);
        }
        else if (driveTrain == 2) {
            cout << endl;
            SetConsoleTextAttribute(hConsole, 3);
            cout << "4x4 Shift in Progress";
            SetConsoleTextAttribute(hConsole, 7);
            Sleep(4000); // Pause for 4 seconds
            cout << endl << endl;
            SetConsoleTextAttribute(hConsole, 6);
            cout << "4x4 HIGH" << endl;
            SetConsoleTextAttribute(hConsole, 7);
        }
        else if (driveTrain == 3) {
            cout << endl;
            SetConsoleTextAttribute(hConsole, 3);
            cout << "4x4 Shift in Progress";
            SetConsoleTextAttribute(hConsole, 7);
            Sleep(6000); // Pause for 6 seconds
            cout << endl << endl;
            SetConsoleTextAttribute(hConsole, 6);
            cout << "4x4 LOW" << endl;
            SetConsoleTextAttribute(hConsole, 7);
        }
        else {
            cout << endl;
            cout << "Invalid selection. Please try again." << endl;
        }
    }
    return 0;
}
