#include <iostream>
using namespace std;

int cnt, target, sum, result;
int dataArray[20];



void addRecursion(int i, int sum) {

    //기본 사례 1 모든 수를 더한 경우
    if (i == cnt) return;

    //기본사례 2 답이 나온경우
    if (sum + dataArray[i] == target) 
        result++;

    //기본 사례가 아닐경우 재귀가 반복된다
    //현재 칸의 수를 더하지 않을 경ㅇ우
    addRecursion(i + 1, sum);

    //현재 칸을 더할 경우
    addRecursion(i + 1, sum + dataArray[i]);
}

int main() {

    cin >> cnt >> target;

    for (int i = 0; i < cnt; i++)
        cin >> dataArray[i];

    result = 0;
    addRecursion(0, 0);

    cout << result;

    return 0;
}