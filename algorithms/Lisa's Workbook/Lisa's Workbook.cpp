// github.com/piotrchaber

int workbook(int n, int k, std::vector<int> arr) {
    int chapter = 0;
    int problem = 1;
    int page = 1;
    int solution = 0;
    while(chapter < n) {
        if(problem <= page && page <= std::min(problem + k - 1, arr[chapter])) solution++;
        page++;
        problem += k;
        if(problem > arr[chapter]) { chapter++; problem = 1; }
    }
    return solution;
}


int workbook(int n, int k, std::vector<int> arr) {
    int j = 0;
    int page = 0;
    int bindex = 0;
    for (int i : arr) {
        while (++j <= i / k) {
            page++;
            if (j * k - k < page && page <= j * k) bindex++;
        }
        if (i % k) {
            page++;
            if (j * k - k < page && page <= (j * k - k) + i % k) bindex++;
        }
        j = 0;
    }
    return bindex;
}