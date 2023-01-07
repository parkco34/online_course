#include <iostream>
#include <vector>

// Doesn't work right now... output not what i want

using std::vector;
using std::cin;
using std::cout;
// Scans thru the set of numbers just once for the two maximum values and returns their product
long long MaxPairwiseProduct(const vector<int>& numbers) {
    int n = numbers.size();
    
    // 1st maximum element
    int max_index1 = -1;
    for (int i=0; i<n; ++i)
        if ((max_index1 == - 1) || numbers[i] > numbers[max_index1])
            max_index1 = i;

    // 2nd maximum element
    int max_index2 = -1;
    for (int j=0; j<n; ++j)
        // first codition skips over the first maximum value
        if ((numbers[j] != numbers[max_index1]) && ((max_index2 == -1) || numbers[j] > numbers[max_index2]))
            int max_index2 = j;

    return ((long long) (numbers[max_index1])) * numbers[max_index2];
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i=0; i<n; ++i) {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);
    cout << result << "\n";
    return 0;
}


