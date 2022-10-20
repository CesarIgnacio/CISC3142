#include <iostream>

// using namespace std; // for not having to write std::

namespace p2
{
    int main()
    {
        int v1, v2;

        std::cout << "Inser two integer numbers\n";
        std::cin >> v1;
        std::cin >> v2;

        std::cout << "The sum of " << v1;
        std::cout << " and " << v2;
        std::cout << " is " << v1 + v2 << std::endl;

        return 0;
    }
}