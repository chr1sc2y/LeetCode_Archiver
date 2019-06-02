int fixedPoint(int* A, int ASize){
    for (int i = 0; i < ASize; ++i)
        if (A[i] == i)
            return i;
    return -1;
}