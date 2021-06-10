// github.com/piotrchaber

long sumXor(long n) {
    int power = 0;
    while(n > 0) {
        if(n % 2 == 0) power++;
        n /= 2;
    }
    return std::pow(2, power);
}