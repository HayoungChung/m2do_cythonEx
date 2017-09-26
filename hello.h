#include <iostream>
#include <vector>
#include <string>

void print_hello();

class HelloClass
{
public:
    HelloClass(std::vector<std::string>&);
    ~HelloClass(){};
    void get_print();
private:
    std::vector<std::string> postdocs;
    int nPostdocs;
};