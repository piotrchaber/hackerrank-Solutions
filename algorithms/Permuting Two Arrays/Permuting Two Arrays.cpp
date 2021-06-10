// github.com/piotrchaber

std::string twoArrays(int k, std::vector<int> A, std::vector<int> B) {
    std::sort(A.begin(), A.end(), std::greater<int>());
    std::sort(B.begin(), B.end(), std::less<int>());
    for(size_t i = 0; i < A.size(); i++) { if(A[i] + B[i] < k) return "NO"; }
    return "YES";
}