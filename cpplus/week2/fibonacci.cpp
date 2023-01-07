/* Fibonacci Sequence
 * F_n = {
 *  0, if n = 0,
 *  1, if n = 1,
 *  F_(n-1) + F_(n-2), if n > 1
 * }*/
#include <iostream>

using namespace std;

int FibRecurs(int n)
{
    int result;
    if (n <= 1)
        result = n;

    else
        result = FibRecurs(n-1) + FibRecurs(n-2);

    return result;
}

int main() 
{
    cout << "Enter the number for which you wish to obtain the fibonacci numbers between 0 and you number: \n";
    int n;
    cin >> n;
    cout << "\nResult: " << FibRecurs(n) << "\n";
    return 0;
}
