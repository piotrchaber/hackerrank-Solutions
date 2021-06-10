// github.com/piotrchaber

int getMoneySpent(std::vector<int> keyboards, std::vector<int> drives, int b) {
    std::sort(keyboards.begin(), keyboards.end());
    std::sort(drives.begin(), drives.end(), [](int k, int l) { return k > l; });
    int sum = -1;
    for (size_t i = 0, j = 0; i < keyboards.size(); i++) {
        for (; j < drives.size(); j++) {
            if (keyboards[i] + drives[j] <= b) {
                if (keyboards[i] + drives[j] > sum) sum = keyboards[i] + drives[j];
                break;
            }
        }
    }
    return sum;
}