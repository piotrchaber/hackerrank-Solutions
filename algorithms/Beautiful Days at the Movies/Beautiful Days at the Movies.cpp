// github.com/piotrchaber

int reverse(int n) {
    int rem, rev = 0;
    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}

int beautifulDays(int i, int j, int k) {
    int b = 0;
    while(i <= j) {
       if(abs(i - reverse(i)) % k == 0) b++;
       i++;
    }
    return b;
}