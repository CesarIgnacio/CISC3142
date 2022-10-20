#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
    // Declaring all the variables
    double x;
    double y;
    int totalNumbers = 0;
    vector<double> xV;
    vector<double> yV;
    double xTotal = 0;
    double yTotal = 0;
    double slope = 0; 
    double fOneTot = 0;
    double fTwoTot = 0;
    double intercept;

    // Reads the input numbers, stores them in two vectors (x and y), add up theirvalues, and count how many pair-munbers were taken
    while(cin >> y >> x) {
        xV.push_back(x);
        yV.push_back(y);
        xTotal += x;
        yTotal += y;
        totalNumbers++;
    }

    // Stores average of all 'x' numbers and 'y' numbers
    double xAverage = xTotal / totalNumbers;
    double yAverage = yTotal / totalNumbers;

    // Iterates through the two vectors
    for (int i = 0; i < xV.size(); i++) {
        double fOne = (xV[i] - xAverage) * (xV[i] - xAverage);
        double fTwo = (xV[i] - xAverage) * (yV[i] - yAverage);
        fOneTot += fOne;
        fTwoTot += fTwo;
    }

    // Using the given formulas, it calculates the slope and intercept values
    slope = fTwoTot / fOneTot;
    intercept = yAverage - (slope * xAverage);

    // Prints the final slope formula. It uses the method 'setprecision()' twice to imitate the result in the example
    cout << "Y^ = " << setprecision(2) << intercept << " + " << setprecision(3) << slope << "x" << endl;

   return 0;
}
