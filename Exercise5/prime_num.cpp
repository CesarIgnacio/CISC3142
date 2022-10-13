#include <iostream>

using namespace std;

int main() {

    int count = 0;

    cout << "1 ";
    
    for (int i = 2; i <= 100; i++) {
        for (int j = i - 1; i > 0; i--) {
            if (i % j == 0) {
                count++;
            }   
        }
        if (count > 3) {
            cout << i << " ";
        }
        count = 0;
    }
    
}