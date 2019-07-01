func twoSum(nums []int, target int) []int {
    u := make(map[int]int)
    for i,value := range nums {
        diff := target - value
        val, ok := u[diff]
        if ok {
            return []int{val, i}
        }
        u[value] = i
    }
    return []int{}
}
