// github.com/piotrchaber

std::vector<std::string> bigSorting(std::vector<std::string> unsorted) {
    std::sort(unsorted.begin(), unsorted.end(), [](const std::string& s1, const std::string& s2)
        { if(s1.length() == s2.length()) return s1 < s2;
        return s1.length() < s2.length(); });
    return unsorted;
}