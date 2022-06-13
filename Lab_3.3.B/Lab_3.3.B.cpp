#include "LongLong.h"
#include <iostream>

using namespace std;

int main()
{
    LongLong l;

    cin >> l;
    cout << l;

    cout << "Addition : " << l + l << endl;
    cout << "Multiplication : " << l * l << endl;
    cout << "Comparing : "; l.Compare();
}
