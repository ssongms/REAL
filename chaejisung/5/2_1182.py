## 입력 부분
[N, S] = map(int, input().split(" "))
seq = list(map(int, input().split(" ")))
seq.sort()

## subset 계산함수
def sum_of_subsets(seq:list, S, weight, total, currentIdx, count: list) -> None:
    
    if(not promising(seq, S, weight, total, currentIdx)):
        return None
    
    if(weight == S):
        print("a", weight)
        count[0] += 1
        return None
    else:
        sum_of_subsets(seq, S, weight+seq[currentIdx+1], total-seq[currentIdx+1], currentIdx+1, count)
        
        sum_of_subsets(seq, S, weight, total-seq[currentIdx+1], currentIdx+1, count)

def promising(seq:list, S, weight, total, currentIdx) -> bool:
    if(S == weight):
        return True
    try:
        return not ((weight+total < S) or (weight+seq[currentIdx+1] > S and S != weight))
    except IndexError:
        return False

count = [0]
sum_of_subsets(seq, S, 0, sum(seq), -1, count)
print(count[0])