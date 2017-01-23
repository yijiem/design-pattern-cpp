//
// Created by Yijie Ma on 1/23/17.
//

#include <iostream>
#include <sstream>

#include "table.h"

class Example {
public:
    Example(int count) : count_(count) {}

    void run() {
        for (int i = 0; i < count_; ++i) {
            std::string key = "key" + std::to_string(i);
            std::string value = "value" + std::to_string(i);
            t_.Put(key, value);
        }
    }

    void verify() {
        for (int i = 0; i < count_; ++i) {
            std::string key = "key" + std::to_string(i);
            std::string value = t_.Get(key);
            if (value != "value" + std::to_string(i)) {
                std::cerr << "verify fail!" << std::endl;
                exit(-1);
            }
        }
        std::cout << "verify succeed!" << std::endl;
    }
private:
    int count_;
    Table t_;
};

int main() {
    Example ex(100);
    ex.run();
    ex.verify();

    return 0;
}