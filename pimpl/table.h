//
// Created by Yijie Ma on 1/23/17.
//

#ifndef DESIGN_PATTERN_CPP_TABLE_H
#define DESIGN_PATTERN_CPP_TABLE_H

#include <string>

//
// This is a Table public API which can be used as an in-memory key-value store,
// the underlining data structure is hided from the API users
//
class Table {
public:
    Table();
    ~Table();

    void Put(std::string key, std::string value);
    std::string Get(std::string key);
    void Delete(std::string key);

private:
    // disable shallow copy of Table object
    // please checkout caveat section in README.md
    Table(const Table &t);
    const Table &operator=(const Table &t);

    class TableImpl;
    TableImpl *impl_;
};

#endif //DESIGN_PATTERN_CPP_TABLE_H
