// github.com/piotrchaber

int birthdayCakeCandles(std::vector<int> candles) {
    int max = *max_element(candles.begin(), candles.end());
    return count_if(candles.begin(), candles.end(), [=](int i) { return i == max; });
}