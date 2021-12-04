#include "iter.hpp"

void f(std::string &s)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
}

int main()
{
    std::string s[4] = {"abc", "def", "hgi", "jkl"};

    update(s, 4, f);

    for (int i = 0; i < 4; i++)
    {
        std::cout << s[i] << std::endl;
    }
    return (0);
}