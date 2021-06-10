// github.com/piotrchaber

std::string kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 <= v2) return "NO";
    return !((x2 - x1) % (v1 - v2)) ? "YES" : "NO";
}