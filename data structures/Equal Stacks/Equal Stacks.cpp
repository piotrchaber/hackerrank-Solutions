// github.com/piotrchaber

int equalStacks(std::vector<int> h1, std::vector<int> h2, std::vector<int> h3) {
    size_t i = 0, j = 0, k = 0;
    int h1sum = std::accumulate(h1.begin(), h1.end(), 0);
    int h2sum = std::accumulate(h2.begin(), h2.end(), 0);
    int h3sum = std::accumulate(h3.begin(), h3.end(), 0);
    while(h1sum != h2sum || h1sum != h3sum) {
        if(h1sum >= h2sum && h1sum >= h3sum) { h1sum -= h1[i]; i++; continue; }
        if(h2sum >= h1sum && h2sum >= h3sum) { h2sum -= h2[j]; j++; continue; }
        if(h3sum >= h1sum && h3sum >= h2sum) { h3sum -= h3[k]; k++; continue; }
    }
    return h1sum;
}