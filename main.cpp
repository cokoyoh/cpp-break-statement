#include <iostream>

using namespace std;

int main() {
    unsigned int count;

    for (count = 1; count <= 10 ; count++) {
        if(count == 5) {
            break; // terminates the loop if the count is 5
        }

        cout << count << " ";
    }

    cout << "\nBroke out of the loop at count = " << count << endl;
}
