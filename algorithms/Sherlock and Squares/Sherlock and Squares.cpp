// github.com/piotrchaber

int squares(int a, int b) {
    return floor(sqrt(b)) - ceil(sqrt(a)) + 1;
}

int squares(int a, int b) {
    int result = 0;
    int i = 1;
    while(i*i < a) i++;
    while(i*i <= b) {result++; i++;}
    return result;
}