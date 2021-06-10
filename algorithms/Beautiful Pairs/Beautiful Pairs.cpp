// github.com/piotrchaber

int beautifulPairs(std::vector<int> A, std::vector<int> B) {
    int result = 0;
    std::map<int, int> mA;
    for (int a : A) mA[a]++;
    for (int b : B) {
        if (mA[b] > 0) { mA[b]--; result++; }
    }
    return result == A.size() ? result - 1 : result + 1;
}

int beautifulPairs(std::vector<int> A, std::vector<int> B) {
    std::vector<int> intersection;
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());
    std::set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(intersection));
    int result = intersection.size();
    return result == A.size() ? result - 1 : result + 1;
}