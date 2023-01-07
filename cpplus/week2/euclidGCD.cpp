#include <iostream>
#include <vector>

using namespace std;

int euclidGCD(int a, int b)
{
    long a_prime;

    if (b == 0)
        return a;
    else
        a_prime = a % b;
    
    // Created recursively
    return euclidGCD(b, a_prime);
}

int main()
{
    int a,b;
    cout << "Enter integer, a: " << "\n";
    cin >> a;
    cout << "Enter integer, b: " << "\n";
    cin >> b;
    cout << "Your numbers are: " << a << ", " << b << "\n";

    cout << "\n\nEuclidean: " << euclidGCD(a,b);

    return 0;
}
