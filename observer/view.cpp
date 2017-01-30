//
// Created by Yijie Ma on 1/29/17.
//

#include "view.h"

#include <iostream>

View::View(std::string name) : name_(name) {}

void View::update(int message) {
    std::cout << "view: " << name_ << " receives message: " << message << std::endl;
}
