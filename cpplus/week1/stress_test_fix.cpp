#include <cstdlib> // To generate reandom numbers , in order generate some random tests
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long MaxPairwiseProduct(const vector<int>& numbers) 
{
    long long result = 0;
    int n = numbers.size();
    for (int i=0; i<n; ++i) {
        for (int j=i+1; j<n; ++j) {
            if (((long long)numbers[i]) * numbers[j] > result)
                result = ((long long)(numbers[i])) * numbers[j];
        }
    }

    return result;
}

long long MaxPairwiseProductFast(const vector<int>& numbers) 
{
    int n = numbers.size();

    int max_index1 = -1;
    for (int i=0; i<n; ++i) {
        if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
                max_index1 = i;
    }

    int max_index2 = -1;
//    for (int i=0; i<n; ++i) {
//        if ((numbers[i] != numbers[max_index1]) && ((max_index2 == -1) || (numbers[i] > numbers[max_index2])))
//            max_index2 = i;
//    }

    for (int i=0; i<n; ++i) {
        if ((i != max_index1) && ((max_index2 == -1) || (numbers[i] > numbers[max_index2])))
            max_index2 = i;
    }


    // Debug output where we're interested in max_index2, since that's the incorrect result
    cout << max_index1 << ' ' << max_index2 << "\n";
    return (long long)(numbers[max_index1]) * numbers[max_index2];
}

int main()
{
    while (true) {
        // Changed 10 to 4
        int n = rand() % 4 + 2; // generates random number between 1 and 9, returning a number between 2 and 11
        cout << n << "\n";
        // Generates an array of numbers
        vector<int> a;

        for (int i=0; i<n; ++i) {
            // Changed from 100000 to 10
            a.push_back(rand() % 10); // Appending radnom numbers between 0 to 99999
        }

        for (int i=0; i<n; ++i) {
            cout << a[i] << ' ';
        }

        cout << "\n";
        long long res1 = MaxPairwiseProduct(a); // Solution1
        long long res2 = MaxPairwiseProductFast(a); // Solution2

        if (res1 != res2) {
            cout << "Wrong answer: " << res1 << ' ' << res2 << "\n";
            break;
        }
        else {
            cout << "OK\n";
        }
    }

    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i=0; i<n; ++i) {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProductFast(numbers);
    cout << result << "\n";
    return 0;
}

