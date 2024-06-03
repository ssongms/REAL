# 1074 Z

N, R, C = map(int, input().split())

def getTurn(N, result, Row, Column):
  if (N == 0):
    print(int(result))
    return
  half = (2 ** (N-1))
  mat = 2 ** (2 * N)

  if (Row <= half) and (Column > half):
      Column -= half
      result += (mat / 4)

  elif (Column <= half):
    Row -= half
    result += (mat / 2)
    
  else:
    Row -= half
    Column -= half
    result += (mat * 3 / 4)
    
  getTurn(N-1, result, Row, Column)

getTurn(N, 0, R+1, C+1)