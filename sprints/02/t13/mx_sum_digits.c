int mx_sum_digits(int num) {
    int d, sum = 0;
    while (num != 0) {
        if (num > 0) {
            d = num % 10;
            sum = sum + d;
            num = num / 10;
        }
        else if (num < 0) {
            num = num * (-1);
            d = num % 10;
            sum = sum + d;
            num = num / 10;
        }
    }
    return sum;
}
