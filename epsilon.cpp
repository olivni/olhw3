#include <iostream>
#include <limits>
using namespace std;

int main() {

    double a{1.0};
    auto eps = numeric_limits<double>::epsilon();

    bool result1 = ( a == a + eps);
    bool result2 = ( a == a + ( eps * 2));
    bool result3 = ( a == a + ( eps / 2));

    cout << ( result1 ? "true" : "false" ) << endl;
    cout << ( result2 ? "true" : "false" ) << endl;
    cout << ( result3 ? "true" : "false" ) << endl;


}
