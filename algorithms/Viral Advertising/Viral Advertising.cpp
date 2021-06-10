// github.com/piotrchaber

int viralAdvertising(int n) {
    int shared = 5;
    int liked = 0;
    int cumulative = 0;
    for(int i = 0; i < n; i++) {
        liked = shared / 2;
        cumulative += liked;
        shared = liked * 3;
    }
    return cumulative;
}

int liked(int n) {
    return n == 1 ? 2 : 3 * liked(n - 1) / 2;
}

int viralAdvertising(int n) {
    return n == 1 ? 2 : liked(n) + viralAdvertising(n - 1);
}