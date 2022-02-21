#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int minRefills(vector<int> x, int n, int L) {
    int numRefills = 0, curRefill = 0;

    while (curRefill <= n) {
        int lastRefill = curRefill;

        while (curRefill <= n && x[curRefill + 1] - x[lastRefill] <= L) {
            curRefill++;
        }

        
        if (curRefill == lastRefill) {
            return -1; 
        }

        if (curRefill <= n) {
            numRefills++;
        }
    }

    return numRefills;
}

int main()
{
    

    int distance; 
    cin >> distance;

    int length;
    cin >> length;

    int n; 
    cin >> n;
    vector<int> x(n + 2);
    x[0] = 0;
    x[n + 1] = distance;

    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }

    cout << minRefills(x, n, length) << "\n";

    return 0;
}