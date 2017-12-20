// COMPLETE include the necessary headers
#include <cassert>
#include <vector>
#include <iostream>
#include "map.h"
#include "square.h"

int main(void) {
    std::vector<int> l;
    for (int i = 0; i < 100; ++i) {
        l.push_back(i);
    }

    std::vector<int> squared;
    map(square(), l.begin(), l.end(), std::back_inserter(squared));    

    for (int i = 0; i < 100; ++i) {
        assert(squared[i] == i*i);
    }

    std::cout << "test complete!!" << std::endl;

    return 0;
}
