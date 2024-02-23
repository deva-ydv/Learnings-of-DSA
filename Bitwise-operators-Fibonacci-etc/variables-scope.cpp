#include <iostream>
using namespace std;


 

// Global variable
int globalVar = 10;

int main() {
    // Local variable
    int localVar = 20;

    {
        // Block-scoped variable
        int blockVar = 30;
        cout << "Inside block: " << blockVar << endl;
    }

    // Error: blockVar is not accessible here
    // std::cout << "Outside block: " << blockVar << std::endl;

    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;


}



/*




*/