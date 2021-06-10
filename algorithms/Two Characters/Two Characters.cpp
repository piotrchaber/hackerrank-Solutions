// github.com/piotrchaber

int alternate(string s) {
    std::string t = s;
    std::string u;
    size_t result = 0;
    
    for(char& c : s) { if(u.find(c) == std::string::npos) u += c; }

    for (size_t i = 0; i < u.size() - 1; i++) {
        for (size_t j = i + 1; j < u.size(); j++) {
            t.erase(std::remove_if(t.begin(), t.end(), [&](char c) { return (c != u[i] && c != u[j]); }), t.end());
            for (size_t k = 0; k < t.size() - 1; k++) {
                if (t[k] == t[k + 1]) { t.clear(); break; }
            }
            result = std::max(t.size(), result);
            t = s;
        }
    }
    
    return result;
}