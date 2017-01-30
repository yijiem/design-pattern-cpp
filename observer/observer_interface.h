//
// Created by Yijie Ma on 1/29/17.
//

#ifndef DESIGN_PATTERN_CPP_OBSERVER_INTERFACE_H
#define DESIGN_PATTERN_CPP_OBSERVER_INTERFACE_H

//
// Observer interface does not know subject interface
//
class ObserverInterface {
public:
    virtual ~ObserverInterface() = default;
    virtual void update(int message) = 0;
};

#endif //DESIGN_PATTERN_CPP_OBSERVER_INTERFACE_H
