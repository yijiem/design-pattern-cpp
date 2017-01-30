//
// Created by Yijie Ma on 1/29/17.
//

#ifndef DESIGN_PATTERN_CPP_VIEW_H
#define DESIGN_PATTERN_CPP_VIEW_H

#include <string>

#include "observer_interface.h"

//
// View overrides update() from ObserverInterface, since it is View's own decision about what to update,
// if a username inside Model has changed, View can update the display of the username
//
// View can know about Model, if you want to implement PULL model, then View can have dependency on Model
// and pull the states from Model after it is updated
//
class View : public ObserverInterface {
public:
    View(std::string name);
    ~View() = default;
    void update(int message) override;

private:
    std::string name_;
};

#endif //DESIGN_PATTERN_CPP_VIEW_H
