/* 정규표현식으로 풀어보려함, but 못함
#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    int n;
    cin >> n;

    string str;
    cin >> str;

    regex re("([A-z]?)([0-9]{1,6})([A-z]?)");
    regex re2("[0-9]{1,6}");

    sregex_iterator it(str.begin(), str.end(), re);
    sregex_iterator end;

    sregex_iterator it2;
    string str2;

    int result = 0;
    while(it != end){
        str2 = it->str();
        //cout << it->str() << endl;
        it2 = sregex_iterator(str2.begin(), str2.end(), re2);
        //cout << "it2" <<  it2->str() << endl;

        result += stoi(it2->str());

        //cout << result;
        it++;
    }
    cout << result;
 } 
 */


