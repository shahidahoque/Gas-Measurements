/*
Name: Shahida Hoque
purpose: Write a program that asks the user to input
â€¢The number of gallons of gas in the tank
â€¢The fuel efficiency in miles per gallon
â€¢The price of gas per gallon

Then print the cost per 100 miles and how far the car can go 
with the gas in the tank.
*/

#include<iostream>
using namespace std;

int main()
{               
    //Enter number of gallons of gas.
    cout << "Enter number of gallons of gas: ";
    int num_gallons;
    cin >> num_gallons;

    //enter miles_per_gallon, this can contain decimal parts,
    //so the type is double.
    cout << "Enter miles per gallon: ";
    double miles_per_gallon; 
    cin >> miles_per_gallon;

    //TODO: enter the price of gas per gallon.
    cout << "Enter price per gallon: ";
    double price_per_gallon; 
    cin >> price_per_gallon;

    //TODO: Find out the price of gas to drive 100 miles.
    int miles = 100;
    cin >> miles;
    int gallons_needed;
    gallons_needed = miles / miles_per_gallon;
    cin >> gallons_needed;
    int total_price;
    total_price = gallons_needed * price_per_gallon;
    cin >> total_price;
    cout << "The price of gas to drive 100 miles: " << total_price << endl; 
    
    //TODO: find out how many miles can drive with my current gas level?
    int miles_possible;
    miles_possible = num_gallons * miles_per_gallon;
    cin >> miles_possible;
    cout << "miles I can drive with my current gas level: " << miles_possible << endl;  
    return 0;
}
