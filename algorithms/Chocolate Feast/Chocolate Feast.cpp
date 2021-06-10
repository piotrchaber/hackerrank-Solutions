// github.com/piotrchaber

int chocolateFeast(int m, int c, int w) {
    int howManyChoc = m / c;
    int howManyWrap = m / c;
    while (howManyWrap >= w) {
        howManyChoc += howManyWrap / w;
        howManyWrap = howManyWrap / w + howManyWrap % w;
    }
    return howManyChoc;
}