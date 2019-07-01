class Solution {
    public int brokenCalc(int X, int Y) {
        if (X >= Y)
            return X - Y;
        return Y % 2 == 1 ? brokenCalc(X, Y + 1) + 1 : brokenCalc(X, Y / 2) + 1;
    }
}
