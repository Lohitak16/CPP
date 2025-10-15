#include <iostream>
using namespace std;

// Check if number is stable
bool isStable(int num) {
    int freq[10] = {0};
    while (num > 0) {
        freq[num % 10]++;
        num /= 10;
    }
    int common = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            if (common == 0) common = freq[i];
            else if (freq[i] != common) return false;
        }
    }
    return true;
}

int main() {
    int n, num, stableSum = 0, unstableSum = 0;
    cin >> n; // number of inputs
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (isStable(num)) stableSum += num;
        else unstableSum += num;
    }
    cout << stableSum - unstableSum;
    return 0;
}

