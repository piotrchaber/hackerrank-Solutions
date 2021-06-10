// github.com/piotrchaber

int absPairDiff(std::pair<int, int> p) {
    return abs(p.first - p.second);
}

std::vector<int> closestNumbers(std::vector<int> arr) {
    std::vector<int> result;
    std::sort(arr.begin(), arr.end());
    int mini = std::abs(arr.back() - arr.front());
    int absi;
    for (size_t i = 0; i < arr.size() - 1; i++) {
        absi = abs(arr[i] - arr[i + 1]);
        if (absi == mini) result.push_back(arr[i]); result.push_back(arr[i + 1]);
        if (absi < mini) { mini = absi; result = { arr[i], arr[i + 1] }; }
    }
    return result;
}

std::vector<int> closestNumbers(std::vector<int> arr) {
    std::vector<int> result;
    std::vector<std::pair<int, int>> vp;
    std::sort(arr.begin(), arr.end());
    for (size_t i = 0; i < arr.size() - 1; i++) vp.push_back(std::make_pair(arr[i], arr[i + 1]));
    std::sort(vp.begin(), vp.end(), [](std::pair<int, int> p1, std::pair<int, int> p2)
	{ if (absPairDiff(p1) == absPairDiff(p2)) return p1.first < p2.first;  return absPairDiff(p1) < absPairDiff(p2); });
    int i = 0;
    do { result.push_back(vp[i].first); result.push_back(vp[i].second);
    } while (absPairDiff(vp[0]) == absPairDiff(vp[++i]));
    return result;
}