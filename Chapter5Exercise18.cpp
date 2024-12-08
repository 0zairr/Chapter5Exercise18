// Chapter5Exercise18.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
File name: Chapter5Exercise18.cpp
Programmmer: Ozair Ghaissi
Date: 11/26/2024
*/


#include <iostream>
using namespace std;

int main() {
    const int YEARS = 6; // Number of data points
    int years[YEARS] = { 1900, 1920, 1940, 1960, 1980, 2000 };
    int populations[YEARS];

    // Prompt user for population data
    cout << "Enter the population (in thousands) for the following years:\n";
    for (int i = 0; i < YEARS; i++) {
        cout << years[i] << ": ";
        cin >> populations[i];

        // Input validation: Ensure population is non-negative
        while (populations[i] < 0) {
            cout << "Error: Population cannot be negative. Enter again for " << years[i] << ": ";
            cin >> populations[i];
        }
    }

    // Display the bar chart
    cout << "\nPRAIRIEVILLE POPULATION GROWTH\n";
    cout << "(each * represents 1,000 people)\n";

    for (int i = 0; i < YEARS; i++) {
        cout << years[i] << " ";
        for (int j = 0; j < populations[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
