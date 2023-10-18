#include <iostream>
#include <string>

void printR(std::string str, int lng)
{
    if (lng >= 0)
    {
        if (lng < str.length()) {
            std::cout << str[lng];
        }
        printR(str, lng - 1);
    }
}

int main()
{
    std::string str = "tiger";
    printR(str, str.length() - 1);
    return 0;
}
