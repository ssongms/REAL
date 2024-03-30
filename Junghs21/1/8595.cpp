#include <cmath>
#include <iostream>
#include <string>

#define ll long long

using namespace std;

int main()
{

    string s = "";
    string num = "";
    int length;

    cin >> length >> s;

    ll hidden = 0;

    //�ܾ��� ���̸�ŭ �ݺ�
    for (int i = 0; i <= s.length(); i++){
        //���ڸ� �������� ���ǹ�
        if (s[i] >= '0' && s[i] <= '9'){
            //���ڸ� num�� �Ҵ�
            num = num + s[i];
        } else{
            //num�� ������� for�� ����
            if (num.empty()) {
                continue;
            }
            //num�� ����� ���ڿ��� ���ڵ��� stoll�� ���ؼ� long long���� ��ȯ
            hidden = hidden + stoll(num);
            num = "";
        }
    }

    cout << hidden;

    return 0;
}