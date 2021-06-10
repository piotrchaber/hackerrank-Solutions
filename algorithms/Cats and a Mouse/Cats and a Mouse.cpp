// github.com/piotrchaber

std::string catAndMouse(int x, int y, int z) {
    int a = abs(x-z);
    int b = abs(y-z);
    return a > b ? "Cat B" : a < b ? "Cat A" : "Mouse C";
}