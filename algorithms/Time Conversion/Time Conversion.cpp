// github.com/piotrchaber

std::string timeConversion(std::string s) {
    int hour = stoi(s.substr(0, 2));
    std::string ss = s.substr(0, s.length() - 2);
    bool am = s.find("AM") != std::string::npos;
    bool pm = s.find("PM") != std::string::npos;
    return (hour < 12 && am) || (hour == 12 && pm) ? ss : pm ? std::to_string(hour + 12) + ss.substr(2) : "00" + ss.substr(2);
}