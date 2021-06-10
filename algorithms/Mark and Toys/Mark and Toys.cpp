// github.com/piotrchaber

int maximumToys(std::vector<int> prices, int k) {
    std::sort(prices.begin(), prices.end());
    int sum = 0;
    int i = 0;
    while(sum <= k) { sum += prices[i]; i++; }
    return i - 1;
}