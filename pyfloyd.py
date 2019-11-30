from math import inf

def floyd(graph,n):
    for k in range(n):
        for i in range(n):
            for j in range(n):
                graph[i][j] = min(graph[i][j],graph[i][k]+graph[k][j])

    for i in range(n):
        print(graph[i])

n = int(input())
graph = []
for i in range(n):
     graph.append(list(map(float,input().split())))

floyd(graph,n)
