class Solution:
    def restoreIpAddresses(self, s: str) -> List[str]:
        n = len(s)

        def Track(num, pos, str):
            if pos == n and num < 4:
                return
            if num == 4:
                if pos == n:
                    ret.append(str[:-1])
                return
            for i in range(3):
                if pos + i >= n:
                    break
                temp = s[pos: pos + i + 1]
                if (int(temp) == 0 and len(temp) == 1) or (int(temp) > 0 and int(temp) <= 255 and temp[0] != '0'):
                    str += temp + '.'
                    Track(num + 1, pos + i + 1, str)
                    str = str[:-(len(temp) + 1)]

        ret = []
        Track(0, 0, "")
        return ret
