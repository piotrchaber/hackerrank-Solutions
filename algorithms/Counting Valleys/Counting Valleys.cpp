// github.com/piotrchaber

int countingValleys(int steps, string path) {
    int sum = 0;
    int valleys = 0;
    for (size_t i = 0; i < path.length(); i++) {
        if (path[i] == 'D') sum--;
        else { sum++; if(!sum) valleys++; }
    }
    return valleys;
}