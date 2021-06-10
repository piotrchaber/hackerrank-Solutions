// github.com/piotrchaber

int findDigits(int n) {
    int m = n, divisors = 0;
    while (m != 0) {
        if (m % 10 && n % (m % 10) == 0) divisors++;
        m /= 10;
    }
    return divisors;
}