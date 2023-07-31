#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void summarizeNumbers(const vector<int>& numbers) {
    vector<int> uniqueNumbers = numbers;
    sort(uniqueNumbers.begin(), uniqueNumbers.end());
    uniqueNumbers.erase(unique(uniqueNumbers.begin(), uniqueNumbers.end()), uniqueNumbers.end());

    int n = uniqueNumbers.size();
    int i = 0;

    while (i < n) {
        int start = uniqueNumbers[i];
        int end = start;

        while (i + 1 < n && uniqueNumbers[i + 1] == uniqueNumbers[i] + 1) {
            end = uniqueNumbers[i + 1];
            i++;
        }

        cout << start;

        if (start != end) {
            cout << "-" << end;
        }

        if (i < n - 1)
            cout << ",";

        i++;
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers;
    int num;

    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    summarizeNumbers(numbers);

    return 0;
}

