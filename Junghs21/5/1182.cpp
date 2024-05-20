#include <iostream>
#include <vector>

using namespace std;

int N, S;
vector<int> arr;
int result = 0;

//DFS 함수
void dfs(int index, int current_sum) {

    // 현재 부분수열의 합이 S인지 체크
    if (index == N) {
        if (current_sum == S) {
            result++;
        }
        return;
    }

    // 현재 원소를 포함하지 않는 경우
    dfs(index + 1, current_sum);

    // 현재 원소를 포함하는 경우
    dfs(index + 1, current_sum + arr[index]);
}

int main() {

    cin >> N >> S;
    arr.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // 합이 S가 되는 부분수열의 개수를 세기 위해 DFS 호출
    dfs(0, 0);

    // S가 0인 경우 공집합을 제외
    if (S == 0) {
        result--;
    }

    cout << result << endl;

}
