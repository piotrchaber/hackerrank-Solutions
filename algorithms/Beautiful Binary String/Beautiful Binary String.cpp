// github.com/piotrchaber

int beautifulBinaryString(std::string b) {
    int start = 0, f = 0, result = 0;
    while (f != std::string::npos) {
        f = b.substr(start, b.length()).find("010");
        start += f + 3;
        result++;
    }
    return result - 1;
}