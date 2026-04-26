class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        n = len(rooms)
        visited = set([0])
        stack = [0]

        while stack:
            u = stack.pop()

            for v in rooms[u]:
                if v not in visited:
                    stack.append(v)
                    visited.add(v)
        return len(visited) == n