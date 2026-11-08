//NGUGI FRANCIS KARANJA
//CT101/G/26611/25

//This is a simple C++ program that tracks room occupancy across three hotel branches using a three-dimensional array.


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    // Initialize random number generation
    srand(static_cast<unsigned int>(time(nullptr)));

    // Assign random occupancy values to all rooms
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Display the occupancy summary
    cout << "HOTEL CHAIN OCCUPANCY REPORT\n";
    cout << "Number of branches: 3\n";
    cout << "Floors per branch: 5\n";
    cout << "Rooms per floor: 10\n";
    cout << "Total rooms: " << 3 * 5 * 10 << endl;
    cout << "Total occupied rooms across all branches: "<< totalOccupied << endl;
    cout << "Total vacant rooms across all branches: "<< (150 - totalOccupied) << endl;
    
return 0;
}

