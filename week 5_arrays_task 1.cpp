//NGUGI FRANCIS KARANJA 
//CT101/G/26611/25

//This is a simple C++ program that tracks hotel revenue for seven days using a one-dimensional array

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double revenue[7];
    double totalRevenue = 0.0;
    double averageRevenue;

    string days[7] = {
        "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday", "Sunday"
    };

    // Input revenue for each day
    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for " << days[i] << " (Ksh): ";
        cin >> revenue[i];

        totalRevenue += revenue[i];
    }

    // Calculate average daily revenue
    averageRevenue = totalRevenue / 7;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\n===== WEEKLY REVENUE REPORT =====\n";
    cout << "Total Weekly Revenue: Ksh "<< totalRevenue << endl;
    cout << "Average Daily Revenue: Ksh "<< averageRevenue << endl;

    return 0;
}