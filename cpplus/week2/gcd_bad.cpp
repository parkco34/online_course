#include <iostream>
#include <vector>

using namespace std;

int gcd(int a,int b)
{
    int best;
    for (int d=1; d <= a+b; ++d) {
        if ((a % d == 0) && (b % d == 0))
            best = d;
    }

    return best;
}

int main()
{
    int a;
    int b;

    cout << "Enter integer, a: ";
    cin >> a;
    cout << "Your number is: " << a << "\n";
    cout << "Enter integer, b: ";
    cin >> b;
    cout << "Your number is: " << b << "\n";

    cout << "\nGCD is: " << gcd(a, b) << "\n";

    return 0;
}
