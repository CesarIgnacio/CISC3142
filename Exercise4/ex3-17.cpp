#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<string> myVec;
    int count8 = 0;

    string str0;
    cout << "Enter a string ('end' stops the program)" << endl;
    cin >> str0;

    while (str0 != "end") {
         
        for (char &c : str0)
            c = toupper(c);

        myVec.push_back(str0);
        cout << "enter another string" << endl;
        cin >> str0;
    }

    cout << "done inputing";

    cout << "Printing Vector elements: \n";

    for(string e : myVec) {
        count8++;
        cout << e << " ";
        
        if(count8 % 8 == 0) {
            cout << endl;
        }
    }
    cout << endl << endl;
    return 0;
}