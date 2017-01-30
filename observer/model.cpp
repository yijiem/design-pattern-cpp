//
// Created by Yijie Ma on 1/29/17.
//

#include "model.h"

void Model::set_name(std::string name) {
    name_ = name;
    notify(NAME);
}

void Model::set_magic(int magic) {
    magic_ = magic;
    notify(MAGIC);
}