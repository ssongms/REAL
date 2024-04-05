#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int minVal = numeric_limits<int>::max(); //가장 큰값으로 초기화
	int minIndex = -1;	//최소거리 안테나 설치 지역 찾기
	int result = -1; //최소거리 안테나

	int numberOfHouse;	// 집의수
	cin >> numberOfHouse;

	vector<int> Houses(numberOfHouse); //집의 수만큼 집 생성
	vector<int> d(numberOfHouse);	//집의 수만큼 거리를 계산해서 저장할 vector 생성

	//집의 수만큼 집의 위치를 입력
	for (int i = 0; i < numberOfHouse; i++) {
		cin >> Houses[i];
	}

	vector<vector<int>> HouseAndDistance; //{집, 거리}를 저장할 2차원 벡터

	//집 거리 계산
	for (int selected : Houses) {
		for (int i = 0; i < Houses.size(); i++) {
			if (Houses[i] != selected) {
				d[i] += abs(selected - Houses[i]); 
			}
		}
	}

	//{집, 거리}로 2차원 벡터에 저장
	for (int i = 0; i < numberOfHouse; i++) {
		HouseAndDistance.push_back({ Houses[i], d[i] });
	}

	//가장 가까운 거리를 찾는중
	for (int i = 0; i < HouseAndDistance.size(); i++) {
		if (HouseAndDistance[i][1] < minVal) {
			minVal = HouseAndDistance[i][1];
			minIndex = i;
		}
	}

	//가장 가까운 거리를 찾은 후, 위치를 찾음
	if (minIndex != -1) {
		result = HouseAndDistance[minIndex][0];
	}

	//결과 출력
	cout << result;

}
