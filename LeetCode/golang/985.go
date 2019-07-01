func sumEvenAfterQueries(A []int, queries [][]int) []int {
    sum, ret := 0, make([]int, 0)
    for i := 0; i < len(A); i++ {
        if A[i]%2 == 0 {
            sum += A[i]
        }
    }
    for i := 0; i < len(queries); i++ {
        if A[queries[i][1]]%2 == 0 {
            sum -= A[queries[i][1]]
        }
        A[queries[i][1]] += queries[i][0]
        if A[queries[i][1]]%2 == 0 {
            sum += A[queries[i][1]]
        }
        ret = append(ret, sum)
    }
    return ret
}