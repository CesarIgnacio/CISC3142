#include <iostream>

namespace p3
{
    int main()
    {

        int v1, v2;

        std::cout << "Insert two integers to set an interval\n";
        std::cin >> v1;
        std::cin >> v2;

        std::cout << "Numbers inside that interval\n";

        int start = v1;
        int end = v2;

        // Checks for the smallest value and places it in v1, the greater value is placed in v2.
        if (v1 > v2)
        {
            int aux = v1;
            v1 = v2;
            v2 = aux;
        }

        // Prints all the integers inside the number range using a for loop
        std::cout << "\tUsing a for loop\n";
        for (size_t i = v1 + 1; i < v2; i++)
        {
            std::cout << i << " ";
        }
        std::cout << "\n"
                  << std::endl;

        // Prints all the integers inside the number range using a while loop
        std::cout << "\tUsing a while loop\n";
        int aux = v1 + 1;
        while (aux < v2)
        {
            std::cout << aux << " ";
            aux++;
        }
        std::cout << "\n";

        return 0;
    }
}