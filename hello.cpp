#include "./hello.h"

void print_hello()
{
    std::cout << "hello world" << std::endl;    
}

HelloClass::HelloClass(std::vector<std::string>& postdocs_): postdocs(postdocs_)
{
    nPostdocs = postdocs.size();
}

void HelloClass::get_print()
{    
    for (int nn = 0; nn < nPostdocs; nn++)
    {
        std::cout << "hi, " << postdocs[nn] << "!"  << std::endl;
    }
    std::cout << "hello to all\n";
}

int main()
{
    std::vector<std::string> lists;
    
    lists.push_back("Zongliang");
    lists.push_back("Hayoung");
    lists.push_back("Sandilya");
    lists.push_back("Renato");
    lists.push_back("Scott");
    lists.push_back("Xiao-Yi");


    HelloClass h1(lists);
    h1.get_print();

    return 0;
}