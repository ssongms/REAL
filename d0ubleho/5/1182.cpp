#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int count = 0;
    int total_subsets = 1 << n;

    for (int i = 1; i < total_subsets; i++) { // 공집합 제외
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) { // j번째 원소가 부분 집합에 포함되는지 확인
                sum += numbers[j];
            }
        }
        if (sum == s) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}