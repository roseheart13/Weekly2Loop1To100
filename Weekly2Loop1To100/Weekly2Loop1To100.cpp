

#include <iostream>
#include <string>

int count{ 1 };

int main()
{
    while (count <=100){
        std::cout << count << ' ';
        ++count;
    } 
    std::cout << std::endl;
}