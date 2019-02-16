class Solution:
    match = []

    def Match(self, i):
        if i == self.match[i]:
            return i
        return self.Match(self.match[i])

    def equationsPossible(self, equations: 'List[str]') -> 'bool':
        self.match = []
        for i in range(26):
            self.match.append(i)
        for s in equations:
            if s[1] == '=':
                self.match[self.Match(ord(s[0]) - 97)] = self.Match(ord(s[3]) - 97)
        for s in equations:
            if s[1] == '!':
                if self.Match(ord(s[0]) - 97) == self.Match(ord(s[3]) - 97):
                    return False
        return True