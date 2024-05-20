N = int(input())
K = int(input())
inputArr = []
for i in range(N):
    inputArr.append(input())

checked = [0]*N
result = []
temp = []

def putCard(depth):
    if(depth==K):
        result.append(''.join(temp))
        return None
    
    for i in range(N):
        if (not checked[i]):
            checked[i] = 1
            temp.append(inputArr[i])
            putCard(depth+1)
            checked[i] = 0
            temp.pop()
           
putCard(0)
print(len(set(result)))
            
            

