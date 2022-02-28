#include <iostream>
#include <vector>
using namespace std;

int main() {

    cout << "Please enter how many Fibonacci numbers you'd like to see:" << endl;
    int f{};
    cin >> f;
    cout << endl;

    if (f <= 1) { 
        cout << "Invalid value. Please enter an integer >= 2." << endl;
        return -1;
    }
    
    cout << "Here you go:" << endl;
    cout << endl;
    
    vector<int> fib{0, 1};
    cout << fib[0] << endl;
    cout << fib[1] << endl;

    for (int k = 2; k <= (f - 1); k++) {
        fib.push_back(fib[(k - 2)] + fib[(k - 1)]);
        cout << fib[k] << endl;
    }
}