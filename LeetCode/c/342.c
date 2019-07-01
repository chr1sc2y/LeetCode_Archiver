bool isPowerOfFour(int num){
    if (num <= 0)
        return false;
    while (num > 1) {
        if ((num & 1) || (num & 2))
            return false;
        num >>= 2;
    }
    return true;
}

