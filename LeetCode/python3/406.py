class Solution:
    def reconstructQueue(self, people: List[List[int]]) -> List[List[int]]:
        res, people_list, people_map = [], [], {}
        for p in people:
            if p[0] not in people_map:
                people_map[p[0]] = [p[1]]
                people_list.append(p[0])
            else:
                people_map[p[0]].append(p[1])
        people_list.sort()
        for p in people_list[::-1]:
            people_map[p].sort()
            for i in range(len(people_map[p])):
                res.insert(people_map[p][i], [p, people_map[p][i]])
        return res
