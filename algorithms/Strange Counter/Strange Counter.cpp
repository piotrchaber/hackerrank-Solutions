// github.com/piotrchaber

long strangeCounter(long t) {
    long n = 3;
    long m = 4;
    while(t >= m) { n *= 2; m += n; }
    return m - t;
}