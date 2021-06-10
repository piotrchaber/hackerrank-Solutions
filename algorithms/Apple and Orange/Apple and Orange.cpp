// github.com/piotrchaber

int athouse(int s, int t, int a, std::vector<int> vi) {
    int h = 0;
    for(int i : vi) {
        i += a;
        if(i >= s && i <= t) h++;
    }
    return h;
}