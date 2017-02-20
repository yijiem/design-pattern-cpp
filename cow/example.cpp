//
// Created by Yijie Ma on 2/20/17.
//

#include <iostream>

#include "cow_string.h"

//
// std ouput result:
//
// count of object1: 2
// count of object2: 2
// content of object1: string1
// content of object2: string1
//
// count of object1: 1
// count of object2: 1
// content of object1: string1
// content of object2: string2
//
int main() {
    CowString object1("string1");
    CowString object2(object1);

    std::cout << "count of object1: " << object1.Count() << std::endl;
    std::cout << "count of object2: " << object2.Count() << std::endl;
    std::cout << "content of object1: " << object1.Get() << std::endl;
    std::cout << "content of object2: " << object2.Get() << std::endl;
    std::cout << std::endl;

    object2.Set("string2");

    std::cout << "count of object1: " << object1.Count() << std::endl;
    std::cout << "count of object2: " << object2.Count() << std::endl;
    std::cout << "content of object1: " << object1.Get() << std::endl;
    std::cout << "content of object2: " << object2.Get() << std::endl;

    return 0;
}