// github.com/piotrchaber

long flippingBits(long n) {
    int bits = 32;
    int power = 0;
    long result = 0;
    while (bits--) { result += ((n % 2) ^ 1) * pow(2, power++); n /= 2; }
    return result;
}