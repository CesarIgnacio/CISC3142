#include <iostream>

using namespace std;

bool testPrime(int num) {
    if (num == 0 || num == 1)
    {
        return false;
    }
    
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        
    }
    
    return true;
}

int main() {

    cout << "These are the prime numbers up to 100" << endl;
    for (int i = 2; i <= 100; i++)
    {
        if (testPrime(i))
        {
            cout << i << " ";
        }
        
    }
    cout << endl << endl;
    
}