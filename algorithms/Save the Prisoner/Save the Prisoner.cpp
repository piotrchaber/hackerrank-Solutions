// github.com/piotrchaber

int saveThePrisoner(int n, int m, int s) {
    int atChair = (m + s - 1) % n;
    return atChair == 0 ? n : atChair;
}