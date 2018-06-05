def getScore(list):
    return list[2]

inputNum = int(input())
list = []
for value in range(inputNum):
    row = input().split()
    row[2] = int(row[2])
    list.append(row)
list.sort(key=getScore, reverse=True)
print(list[0][0]+' '+list[0][1])
print(list[-1][0]+' '+list[-1][1])
