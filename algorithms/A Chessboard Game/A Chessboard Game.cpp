// github.com/piotrchaber

std::string chessboardGame(int x, int y) {
    bool conX = x % 4 == 1 || x % 4 == 2;
    bool conY = y % 4 == 1 || y % 4 == 2;
    return conX && conY ? "Second" : "First";
}