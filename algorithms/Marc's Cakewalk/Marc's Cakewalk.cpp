// github.com/piotrchaber

long marcsCakewalk(std::vector<int> calorie) {
    std::sort(calorie.begin(), calorie.end(), [](int k, int l) { return k > l; });
    long minDistance = 0;
    for(long i = 0; i < calorie.size(); i++) minDistance += std::pow(2, i) * calorie[i];
    return minDistance;
}