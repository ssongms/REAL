# 1074 Z

# 분할정복
N, R, C = map(int, input().split())

def getTurn(N, result, Row, Column):
  if (N == 0):
    print(int(result))
    return

  half = (2 ** (N-1)) # 사분면을 가를 기준
  mat = 2 ** (2 * N) # 현재 전체 행렬의 크기

  if (Row <= half) and (Column > half): # 2사분면
      Column -= half # 다음 재귀를 위해 행 또는 열 크기 줄이기
      result += (mat / 4)

  elif (Column <= half): # 3사분면
    Row -= half
    result += (mat / 2)
    
  else: # 4사분면
    Row -= half
    Column -= half
    result += (mat * 3 / 4)
    
  getTurn(N-1, result, Row, Column) # 줄어든 행렬을 재귀호출

getTurn(N, 0, R+1, C+1)





# 재귀
N, r, c = map(int, input().split())

def sol(N, r, c):

	if N == 0:
		return 0

	return 2*(r%2)+(c%2) + 4*sol(N-1, int(r/2), int(c/2))

print(sol(N, r, c))

