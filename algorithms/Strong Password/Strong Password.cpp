// github.com/piotrchaber

int minimumNumber(int n, std::string password) {
    int isUpper = 0; int isLower = 0;
    int isDigit = 0; int isSpecial = 0;
    for (size_t i = 0; i < password.length(); i++) {
        isUpper = int(isUpper || isupper(password[i]));
        isLower = int(isLower || islower(password[i]));
        isDigit = int(isDigit || isdigit(password[i]));
        isSpecial = int(isSpecial || (!isupper(password[i]) && !islower(password[i]) && !isdigit(password[i])));
    }
    int m = 4 - (isUpper + isLower + isDigit + isSpecial);
    return n + m >= 6 ? m : 6 - (n + m) + m;
}