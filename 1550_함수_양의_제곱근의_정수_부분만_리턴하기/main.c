int sqrt(long long int num) {
    int i = 1, result = 0;
    double qu_sqrt_num = 0;
    while (1) {
        qu_sqrt_num = (double)i * i;
        if (qu_sqrt_num > (double)num) {
            return --i;
        }
        else if (qu_sqrt_num == (double)num){
            return i;
        }
        i++;
    }
    return 0;
}

