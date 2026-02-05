#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    int count = 0;
    for (int i = 0; i < N; i++) {
        int target = arr[i];
        int left = 0;
        int right = N - 1;

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (sum == target) {
                if (left != i && right != i) {
                    count++;
                    break;
                }
                else if (left == i) {
                    left++;
                }
                else if (right == i) {
                    right--;
                }
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    cout << count;
    return 0;
}