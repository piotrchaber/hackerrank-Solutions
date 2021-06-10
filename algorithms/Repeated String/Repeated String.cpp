// github.com/piotrchaber

long repeatedString(std::string s, long n) {
    long numberOfA = std::count(s.begin(), s.end(), 'a');
    numberOfA = (n / s.length()) * numberOfA;
    long additionalA = std::count(s.begin(), s.begin() + (n % s.length()), 'a');
    return numberOfA + additionalA;
}