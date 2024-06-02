#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
해결 아이디어
 - 각 지점에서 거리의 합이 최소인 지점 -> 젤 가운데 집 위치라고 생각
 - 그냥 하니깐 됨(왜지..)
*/
int main() {
    // 첫째 줄 입력
    int N;
    cin >> N;

    // 둘째 줄 입력
    int store;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        cin >> store;
        v.push_back(store);
    }
    // 벡터 v에 모두 입력 후 정렬
    sort(v.begin(), v.end());

    // 정렬된 벡터에서 가장 가운데 있는 점 찾기
    // [..3,4..] 같은 경우 대비해 가운데 2개의 점 중 작은 점 선택
    cout << min(v[int((N - 1) / 2)], v[int(N / 2)]);
    return 0;
}