#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>arr;
    for (int i = 0; i < n; i++) {   // n개의 변수 입력받음
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());   /*거리가 1부터시작해서 점점 증가할수록 임의의 집과 1만큼 가까워지면서도 
        지나쳤던 집과는 거리가 1만큼 멀어진다 결국에 n개의 집이있었을때 집하나를 골라 영역 2개로 나눈다 치면
        가운데 집을 고르는게 가장 거리의 합이 작을것이다.*/
    cout << arr[(n - 1) / 2];  //중앙값 출력
}