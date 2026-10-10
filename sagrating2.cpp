#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 0, j = n - 1;

    while (i < j) {
        if (arr[i] == 0) {
            i++;            // Left wala 0 sahi jagah par hai
        } else if (arr[j] == 1) {
            j--;            // Right wala 1 sahi jagah par hai
        } else {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
}