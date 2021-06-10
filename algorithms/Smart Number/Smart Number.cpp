// github.com/piotrchaber

bool is_smart_number(int num) {
    int val = (int)sqrt(num);
    if(num / (double)val == val)
        return true;
    return false;
}