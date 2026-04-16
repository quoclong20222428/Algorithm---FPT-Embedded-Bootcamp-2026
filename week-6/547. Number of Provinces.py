class Solution:
    goX = [1, 0, -1, 0]
    goY = [0, -1, 0, 1]
    def dfs(self, i, n, isVisited, isConnected: List[List[int]]):
        for j in range(0, n):
            if isConnected[i][j] == 1 and not isVisited[j]:
                isVisited[j] = True
                self.dfs(j, n, isVisited, isConnected)

    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        isVisited = [False] * n
        res = 0

        for i in range (0,n):
            if not isVisited[i]:
                isVisited[i] = True
                self.dfs(i, n, isVisited, isConnected)
                res += 1
            
        return res