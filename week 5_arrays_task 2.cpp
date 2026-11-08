//NGUGI FRANCIS KARANJA
//CT101/G/26611/25

// This is a simple C++ program that tracks room occupancy for one hotel branch using a two-dimensional array.


#include <iostream>
using namespace std;

int main() {
    int occupancy[5][10];

    cout << "ROOM OCCUPANCY SYSTEM\n";
    cout << "Enter 1 for occupied and 0 for vacant.\n\n";

    // Input room occupancy
    for (int floor = 0; floor < 5; floor++) {
        cout << "Enter occupancy for Floor "
             << floor + 1 << ":\n";

        for (int room = 0; room < 10; room++) {
            do {
                cout << "Room " << room + 1 << ": ";
                cin >> occupancy[floor][room];

                if (occupancy[floor][room] != 0 &&
                    occupancy[floor][room] != 1) {
                    cout << "Invalid input. Enter 0 or 1.\n";
                }
            } while (occupancy[floor][room] != 0 &&
                     occupancy[floor][room] != 1);
        }
        cout << endl;
    }

    // Count occupied and vacant rooms in each floor
    cout << "\nROOM OCCUPANCY REPORT\n";

    for (int floor = 0; floor < 5; floor++) {
        int occupied = 0;

        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupied++;
            }
        }

        int vacant = 10 - occupied;

        cout << "Floor " << floor + 1
             << ": Occupied = " << occupied
             << ", Vacant = " << vacant << endl;
    }

    return 0;
}
