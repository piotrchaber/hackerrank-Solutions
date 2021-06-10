// github.com/piotrchaber

std::vector<int> compareTriplets(std::vector<int> a, std::vector<int> b) {
    int alice = 0, bob = 0;
    for (int i = 0; i < 3; i++) {
        if(a[i] > b[i]) alice++;
        if(a[i] < b[i]) bob++;
    }
    return {alice,bob};
}