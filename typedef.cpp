#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairList_t;
typedef std::string str_t;

using text_t = std::string;

int main() {

    pairList_t pairList;

    str_t str = "Hello, World!";

    text_t text = "Hello, World!";

    std::cout << str << std::endl;
    std::cout << text << std::endl;

    return 0;
}
