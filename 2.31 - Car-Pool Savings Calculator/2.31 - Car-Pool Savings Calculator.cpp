/* 2.31) Research several car-pooling websites. Create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The application should input the following information and display the user’s cost per day of driving to work: 
        a.)	Total miles driven per day
        b.)	Cost per gallon of gasoline
        c.)	Average miles per gallon
        d.)	Parking fees per day
        e.)	Tolls per day
   Programmer: Anna Le */

#include <iostream>
using namespace std;

int main()
{
    // Declaring variables
    int milesDriven;
    int costPerGallon;
    int averageMilesPerGallon;
    int parkingFees;
    int tolls;

    // Assigning values to variables
    cout << "Total Miles Driven Per Day: ";
    cin >> milesDriven;
    cout << "Cost Per Gallon of Gasoline: ";
    cin >> costPerGallon;
    cout << "Average Miles Per Gallon: ";
    cin >> averageMilesPerGallon;
    cout << "Parking Fees Per Day: ";
    cin >> parkingFees;
    cout << "Tolls Per Day: ";
    cin >> tolls;

    // Calculating Daily Cost
    cout << "Daily Driving Cost: ";
    cout << milesDriven * costPerGallon / averageMilesPerGallon + parkingFees + tolls << endl;

    // Verifying to the program that it's running correctly
    return 0;
}