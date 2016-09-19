#include <iostream>

struct forpretty {
    int x;
    int y;
};

namespace my {
    int fun(int a) {
        int b;
        b = a + 5;
        return b; 
    }
}

int main(int argc, char** argv) {
    std::cout << "HLLL" << std::endl;
    std::cout << argc << " " << argv[0] << std::endl;
    std::cout << my::fun(5) << std::endl;
    int i;
    std::cin >> i;
    std::cout << i + 5;
    struct forpretty fp;
    fp.x = 2;
    fp.y = 5;
    
    using namespace std;
    cout << fp.x << endl;
    cout << fp.y << endl;
    return 0;
}
