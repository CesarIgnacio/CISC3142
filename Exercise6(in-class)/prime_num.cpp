#include <iostream>

using namespace std;

// Returns true if a given number is a prime number, returns false otherwise.
bool testPrime(int num)
{
    // If the number is 0 or 1 it returns false
    if (num == 0 || num == 1)
    {
        return false;
    }

    for (int i = 2; i < num; i++)
    {
        // If the module is 0, that means it is divisible by that number, then it returns false
        if (num % i == 0)
        {
            return false;
        }
    }
    // Returns true otherwise
    return true;
}

namespace p5
{
    int main()
    {

        cout << "These are the prime numbers up to 100" << endl;

        // It goes through all the numbers from 2 to 100 and call testPrime() function to check if it's a prime number
        for (int i = 2; i <= 100; i++)
        {
            if (testPrime(i))
            {
                cout << i << " ";
            }
        }
        cout << endl
             << endl;
<<<<<<< HEAD
        return 0; 
=======
        return 0;  
>>>>>>> 537be8bce2680ae66558bc2a4f6ecf811ad9d086
    }
}