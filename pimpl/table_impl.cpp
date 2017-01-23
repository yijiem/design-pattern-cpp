//
// Created by Yijie Ma on 1/23/17.
//

#include <map>

#include "table.h"

//
// internally Table uses std::map to store key value pair,
// this information is hided from the API users
//
class Table::TableImpl {
public:
    TableImpl() {}
    ~TableImpl() {}

    std::map<std::string, std::string> table_;
};

Table::Table() : impl_(new TableImpl()) {}

Table::~Table() {
    delete impl_;
}

void Table::Put(std::string key, std::string value) {
    impl_->table_[key] = value;
}

std::string Table::Get(std::string key) {
    if (impl_->table_.count(key) == 0) return nullptr;
    return impl_->table_[key];
}

void Table::Delete(std::string key) {
    impl_->table_.erase(key);
}