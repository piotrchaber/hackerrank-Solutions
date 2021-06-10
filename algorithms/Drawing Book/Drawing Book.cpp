// github.com/piotrchaber

int pageCount(int n, int p) {
    int l = p/2;
    int r = n/2 - l;
    return l <= r ? l : r;
}