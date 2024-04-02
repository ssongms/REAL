#18310 안테나
N = int(input()) #집 수
location = list(map(int, input().split())) #집들의 위치 리스트
location.sort() #오름차순 정렬

distance_dict = {} #기준 위치 : 나머지와 거리 총합 딕셔너리로 매칭
for standard in location: #기준 위치
    distance = 0
    for target in location: #비교 위치
        distance += abs(standard - target) #기준이 되는 집에서 다른 모든 집과의 거리 총합
    distance_dict[standard] = distance

installation = min(distance_dict, key = distance_dict.get)
print(installation)