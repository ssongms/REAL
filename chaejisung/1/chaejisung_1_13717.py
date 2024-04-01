n = int(input())
maxEvolveCount = 0

evolveSum = 0
resultPokeName = ''

for i in range(n):
    pokeName = input()
    candies = input()
    kCandies = int(candies.split(" ")[0])
    mCandies = int(candies.split(" ")[1])
    
    evolveCount = 0
    while(kCandies <= mCandies):
        evolveCount += 1
        mCandies = mCandies-kCandies+2
        
    if(maxEvolveCount < evolveCount):
        maxEvolveCount = evolveCount
        resultPokeName = pokeName
    evolveSum += evolveCount
    
print(evolveSum)
print(resultPokeName)
