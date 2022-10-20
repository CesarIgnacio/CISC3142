#include <iostream>

using namespace std;

int inflation() {

    // Declaring variables
	double initialValue;
	double inflationRate;
	int numberOfYears;

    // Input infomation
	cout<< "Enter item value in dollars: \n";
	cin >> initialValue;

	cout <<"Enter inflation rate in Pecentage:\n";
	cin >> inflationRate;

	cout << "Enter the number of years: \n";
	cin >> numberOfYears;


	int initialNumberOfYears = numberOfYears;
	inflationRate = (inflationRate/100) + 1.00;                 
	double thisYearsValue = initialValue;

    // Calculates the inflation for every year
	while (numberOfYears > 0){
		thisYearsValue *= inflationRate;
		numberOfYears--;
		}

	cout << "Cost of item initially: " << initialValue << "\n";
	cout << "After " << initialNumberOfYears << " years" << "\n";
	cout << "Inflation rate: " << inflationRate << "\n";
	cout << "Item will be worth: $" << thisYearsValue << "\n";
    cout << endl;

    return 0;
	}