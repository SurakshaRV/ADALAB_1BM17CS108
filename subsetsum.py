def findPartition(arr, n):
  arrSum = sum(arr)
  i, j = 0, 0
  if arrSum % 2 != 0:
    return False
  part = [[True for i in range(n + 1)] for j in range(arrSum // 2 + 1)]
  for i in range(0, n + 1):
    part[0][i] = True
  for i in range(1, arrSum // 2 + 1):
    part[i][0] = False
  for i in range(1, arrSum // 2 + 1):
    for j in range(1, n + 1):
      part[i][j] = part[i][j - 1]
       if i >= arr[j - 1]:                                                                                                   if i >= arr[j - 1]:
          part[i][j] = (part[i][j] or part[i - arr[j - 1]][j - 1])
  for i in range(len(part)):
    print(part[i])
  return part[arrSum // 2][n]  

arr = list(map(int,input().split()))
print(findPartition(arr,len(arr)))
