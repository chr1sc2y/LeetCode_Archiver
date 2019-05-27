int maxCount(int m, int n, int** ops, int opsSize, int* opsColSize){
    for (int i = 0; i < opsSize; ++i) {
        m = m < ops[i][0] ? m :ops[i][0];
        n = n < ops[i][1] ? n :ops[i][1];
    }
    return m * n;
}

