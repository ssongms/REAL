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

    //단어의 길이만큼 반복
    for (int i = 0; i <= s.length(); i++){
        //숫자만 가져오는 조건문
        if (s[i] >= '0' && s[i] <= '9'){
            //숫자면 num에 할당
            num = num + s[i];
        } else{
            //num이 비었으면 for문 수행
            if (num.empty()) {
                continue;
            }
            //num에 저장된 문자열의 숫자들을 stoll을 통해서 long long으로 반환
            hidden = hidden + stoll(num);
            num = "";
        }
    }

    cout << hidden;

    return 0;
}