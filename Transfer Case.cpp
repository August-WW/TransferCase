#include <iostream>
#include <windows.h> // For Sleep function

using namespace std;

int main() {
    int driveTrain;

    cout << "Transfer Case Utility" << endl;
    cout << "=====================" << endl;

    while (true) { // Infinite loop to keep the program running
        cout << endl;
        cout << "1. 2H | 2. 4H | 3. 4L ";
        cin >> driveTrain;

        if (driveTrain == 1) {
            cout << endl;
            cout << "4x4 Shift in Progress";
            Sleep(4000); // Pause for 4 seconds
            cout << endl << endl;
            cout << "4x2" << endl;
        }
        else if (driveTrain == 2) {
            cout << endl;
            cout << "4x4 Shift in Progress";
            Sleep(4000); // Pause for 4 seconds
            cout << endl << endl;
            cout << "4x4 HIGH" << endl;
        }
        else if (driveTrain == 3) {
            cout << endl;
            cout << "4x4 Shift in Progress";
            Sleep(6000); // Pause for 6 seconds
            cout << endl << endl;
            cout << "4x4 LOW" << endl;
        }
        else if (driveTrain == 4) {
            cout << endl;
            cout << "Exiting..." << endl;
            break; // Exit the loop and end the program
        }
        else {
            cout << endl;
            cout << "Invalid selection. Please try again." << endl;
        }
    }

    return 0;
}
