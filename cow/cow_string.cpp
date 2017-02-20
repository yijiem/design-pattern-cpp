//
// Created by Yijie Ma on 2/19/17.
//

#include "cow_string.h"

CowString::CowString(const std::string &str) : str_(new std::string(str)) {}

std::string CowString::Get() const {
    return *str_;
}

void CowString::Set(const std::string &other) {
    if (str_ && str_.unique()) {
        str_->assign(other);
        return;
    }
    str_ = std::make_shared<std::string>(other); // detach or initialize
}

int CowString::Count() const {
    return str_.use_count();
}