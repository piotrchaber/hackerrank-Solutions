// github.com/piotrchaber

int utopianTree(int n) {
    return n == 0 ? 1 : n == 1 ? 2 : n % 2 ? 2 * utopianTree(--n) : utopianTree(--n) + 1;
}