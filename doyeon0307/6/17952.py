# 3. 과제는 끝나지 않아! https://www.acmicpc.net/problem/17952

# 최근에 나온 순서대로, 받으면 바로 시작
# 과제 도중 새로운 과제 -> 하던 일 중단하고 새로운 과제 시작
# 새로운 과제를 끝내면 이전에 하던 과제 이어서 수행

# 과제가 몇 번 걸릴지 알 수 있음
# 제출하면 무조건 만점

import sys
input = sys.stdin.readline

class homework:
  def __init__(self):
    self.hw = [] # [점수, 완료까지 남은 시간]
    self.idx = -1 # 현재 수행 중인 과제의 인덱스
    self.scr = 0 # 최종 점수
  
  def newHW(self, score, time):
    if time > 1:
      self.hw.append([score, time - 1]) # 과제 목록에 넣어줌 & 바로 시작하므로 남은 시간에서 1을 빼줌
      self.idx = len(self.hw) - 1 # 수행 중인 과제를 새로운 과제로 업데이트

    else: # 과제가 1분 걸린다면 받자마자 끝남 -> 바로 최종 점수에 과제 점수를 더함
      self.scr += score

  def noHW(self):
    if self.idx > -1: # 수행 중인 과제가 있다면
      self.hw[self.idx][1] -= 1 # 과제 완료까지 남은 시간에서 1을 빼줌
      if self.hw[self.idx][1] == 0: # 과제를 완료했다면
        self.scr += self.hw.pop()[0] # 과제 목록에서 삭제하고 최종 점수에 과제 점수를 더함
        if self.hw: # pop하고도 과제가 남았다면 이전에 하던 과제로 돌아가기
          self.idx -= 1
        else: # 아무 과제가 없다면 -1로 초기화
          self.idx = -1
  
  def __str__(self):
    return str(self.scr)


n = int(input())
sung = homework() # 성애의 과제

for _ in range(n):
  input_ = list(map(int, input().split()))
  if input_[0] == 1:
    sung.newHW(input_[1], input_[2])
  else:
    sung.noHW()

print(sung)