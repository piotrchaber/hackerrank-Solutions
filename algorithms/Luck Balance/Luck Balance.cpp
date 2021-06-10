// github.com/piotrchaber

int luckBalance(int k, std::vector<std::vector<int>> contests) {
    int sum = 0;
    int c = std::count_if(contests.begin(), contests.end(), [](std::vector<int>& vi) { return vi[1] == 0; });
    std::sort(contests.begin(), contests.end(), [](std::vector<int>& vi1, std::vector<int>& vi2) { if (vi1[1] == vi2[1]) return vi1[0] > vi2[0]; return vi1[1] < vi2[1]; });
    for (int i = 0; i < contests.size(); i++) {
        if (i < k + c) { sum += contests[i][0]; continue; }
        sum -= contests[i][0];
    }
    return sum;
}