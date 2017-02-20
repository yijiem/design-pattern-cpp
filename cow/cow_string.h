//
// Created by Yijie Ma on 2/19/17.
//

#ifndef DESIGN_PATTERN_CPP_COW_STRING_H
#define DESIGN_PATTERN_CPP_COW_STRING_H

#include <memory>
#include <string>

//
// copy on write string
// std::string is already cow, this CowString is just a demo of making a certain object(in this case string) copy on write
//
class CowString {
public:
    CowString() = default;
    CowString(const std::string &str);
    ~CowString() = default;
    CowString(const CowString &other) = default;
    CowString &operator=(const CowString &other) = default;

    std::string Get() const;

    //
    // when str_ is managing a valid string and there is only 1 reference to it
    // Set will reuse the underling string object and assign it a new value
    //
    // otherwise when there is more than 1 reference to it,
    // Set will detach the reference of the current called CowString object
    //
    void Set(const std::string &other);

    //
    // get the reference count of the shared ptr
    // this is used in example to verify whether instance of this class share the same underling object
    //
    int Count() const;

private:
    std::shared_ptr<std::string> str_;
};

#endif //DESIGN_PATTERN_CPP_COW_STRING_H
