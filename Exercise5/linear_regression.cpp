#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
    
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

    while(cin >> y >> x) {
        xV.push_back(x);
        yV.push_back(y);
        xTotal += x;
        yTotal += y;
        totalNumbers++;
    }

    double xAverage = xTotal / totalNumbers;
    double yAverage = yTotal / totalNumbers;

    // Iterates through the two vectors
    for (int i = 0; i < xV.size(); i++) {
        double fOne = (xV[i] - xAverage) * (xV[i] - xAverage);
        double fTwo = (xV[i] - xAverage) * (yV[i] - yAverage);
        fOneTot += fOne;
        fTwoTot += fTwo;
    }

    slope = fTwoTot / fOneTot;
    intercept = yAverage - (slope * xAverage);

    cout << "Y^ = " << setprecision(2) << intercept << " + " << setprecision(3) << slope << "x" << endl;

}
