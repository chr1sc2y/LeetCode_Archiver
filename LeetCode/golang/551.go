func checkRecord(s string) bool {
    a, l := 0, 0
    for i := 0; i < len(s); i++ {
        if s[i] == 'L' {
            l++
        } else {
            l = 0
        }
        if s[i] == 'A' {
            a++
        }
        if (a >= 2 || l >= 3) {
            return false
        }
    }
    return true
}
