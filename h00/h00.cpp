/**
 *  @author Put your name here
 *  @date Put the date here (Semester is OK)
 *  @file h00.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "zbocek";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Input: weight of box of cereal in ounces
    // Output: weight of box in metric tons, boxes per ton
    // Given: Metric ton is 35,273.92 ounces
    // Calculation: weight in tons->weight divided by metric tons per ounce
    // Calculation: boxes->1 divided by weight in tons
    const double metTon{35273.92};
    cout << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "Cereal Box Calculator" << endl;
    cout << string(50, '-') << endl;
    cout << "Enter ounces per box of cereal: ";
    double cerBox;
    cin >> cerBox;
    double weightMetTons = cerBox / metTon;
    double boxesPerTon = metTon / cerBox;
    cout << "Weight in Metric tons, boxes per ton: [" << weightMetTons << ", " << boxesPerTon << "]" << endl;

    return 0;
}

