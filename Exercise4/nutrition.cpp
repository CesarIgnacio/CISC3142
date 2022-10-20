#include <iostream>
#include <cmath>

using namespace std;

// Converts from pound to gram
double poundToGram(double weight) {
    return weight * 453.59237;
}

/*  According to the exercise, a 35 grams mouse can be killed with 5 grams of the sweetener.
    I use that ratio ( 1/7 ) to figure out the amount of grams that will kill a person according to their weight.*/
double maxSweetCom(double weight) {
    return weight / 7;
}

int nutrition() {

    double weight;
    //The amount of sweetener (in grams) that a 350 grams can of soda pop have.
    const double sweetPerCan = 0.0001;

    cout << "Insert your future weight in pounds" << endl;
    cin >> weight;

    // Converting the weight from pounds to grams, and then finding the minimum amount of sweetener in grams that this person can handle.
    weight = maxSweetCom(poundToGram(weight));

    // Dividing amount of grams that this person can handle by the amount of sweetener in one can of soda pop.
    long double answer =  (weight / sweetPerCan) - 1;

    // Moving from a double to a integer variable.
    int result = trunc(answer);

    cout<< "The number of cans you can drink without dying is:  " << result << endl;
    cout << endl;

    return 0;
}