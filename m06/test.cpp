#include <iostream>
#include <string>

int main() {

    char *str = "hello";
    float* num;

    // using stoi() to store the value of str1 to x
    num = (float*)str; 

    std::cout << num;

    return 0;
}