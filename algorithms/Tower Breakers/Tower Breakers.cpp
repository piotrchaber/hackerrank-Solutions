// github.com/piotrchaber

int towerBreakers(int n, int m) {
    return m == 1 ? 2 : n % 2 ? 1 : 2;
}