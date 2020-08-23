#include <bits/stdc++.h>
using namespace std;

void printRightAlignedLines(const std::string& s, int width)
{
    std::istringstream iss(s); //Create an input string stream from s
    for (std::string line; std::getline(iss, line); ) //then use it like cin
        std::cout << std::setw(width) << line << '\n';
}

int main()
{
    string s = "Mosiur Rahman Sweet";
    printRightAlignedLines(s,5);
}
