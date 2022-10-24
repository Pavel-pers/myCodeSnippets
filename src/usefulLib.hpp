#include <iostream>
#include <vector>
char to(int p)
{
    return ((p < 10) ? (p + '0') : (p - 'A' - 10));
}
std::pair<char, char> charTo (char a)
{
      return {to(a & 15), to((a >> 4) & 15)};
}

void printB(std::vector<std::pair<char,char>>a) {
    for (int i = 0; i < a.size(); i++) {
        std::cout<<a[i].first << a[i].second << ' ';

        if (i % 16 == 15)
            std::cout<<'\n';
    }
}

int toupper(int c)
{}

int isuuper(int c)
{}