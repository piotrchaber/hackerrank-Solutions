// github.com/piotrchaber

int designerPdfViewer(std::vector<int> h, std::string word) {
    int m = 1;
    for(int i = 0; i < word.length(); i++) {
        m = max(h[word[i] - 'a'], m);
    }
    return word.length() * m;
}