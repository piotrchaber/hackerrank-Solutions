// github.com/piotrchaber

int lonelyinteger(std::vector<int> arr) {
    int result = 0;
    for(int i : arr) result = result ^ i;
    return result;
}