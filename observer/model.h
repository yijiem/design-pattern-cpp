//
// Created by Yijie Ma on 1/29/17.
//

#ifndef DESIGN_PATTERN_CPP_MODEL_H
#define DESIGN_PATTERN_CPP_MODEL_H

#include <string>

#include "subject_interface.h"

//
// Model plugins SubjectInterface which implements pub/sub functions,
// it just need to define the message type and call notify at the right time
//
// Model does not and should not know about View
//
class Model : public SubjectInterface {
public:
    Model() = default;
    ~Model() = default;
    void set_name(std::string name);
    void set_magic(int magic);

    enum { NAME, MAGIC };
private:
    std::string name_;
    int magic_;
};

#endif //DESIGN_PATTERN_CPP_MODEL_H
