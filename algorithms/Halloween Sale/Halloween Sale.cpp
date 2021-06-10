// github.com/piotrchaber

int howManyGames(int p, int d, int m, int s) {
    int costOneGame = p;
    int countGames = 0;
    while (s - costOneGame >= 0) {
        s -= costOneGame;
        costOneGame = costOneGame - d > m ? costOneGame - d : m;
        countGames++;
    }
    return countGames;
}