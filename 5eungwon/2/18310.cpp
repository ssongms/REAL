#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>arr;
    for (int i = 0; i < n; i++) {   // n���� ���� �Է¹���
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());   /*�Ÿ��� 1���ͽ����ؼ� ���� �����Ҽ��� ������ ���� 1��ŭ ��������鼭�� 
        �����ƴ� ������ �Ÿ��� 1��ŭ �־����� �ᱹ�� n���� �����־����� ���ϳ��� ��� ���� 2���� ������ ġ��
        ��� ���� ���°� ���� �Ÿ��� ���� �������̴�.*/
    cout << arr[(n - 1) / 2];  //�߾Ӱ� ���
}