// github.com/piotrchaber

std::string dayOfProgrammer(int year) {
    if (year == 1918) return "26.09.1918";
    if (year < 1918 && !(year % 4)) return "12.09." + std::to_string(year);
    if (year > 1918 && ((!(year % 4) && year % 100) || !(year % 400))) return "12.09." + std::to_string(year);
    return "13.09." + std::to_string(year);
}