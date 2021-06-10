// github.com/piotrchaber

std::vector<int> breakingRecords(std::vector<int> scores) {
    int max = scores.front();
    int min = scores.front();
    int nmax = 0;
    int nmin = 0;
    for (int& s : scores) {
        if (s > max) { max = s; nmax++; }
        if (s < min) { min = s; nmin++; }
    }
    return { nmax,nmin };
}