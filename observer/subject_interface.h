//
// Created by Yijie Ma on 1/29/17.
//

#ifndef DESIGN_PATTERN_CPP_SUBJECT_INTERFACE_H
#define DESIGN_PATTERN_CPP_SUBJECT_INTERFACE_H

#include <map>
#include <vector>

#include "observer_interface.h"

class SubjectInterface {
public:
    virtual ~SubjectInterface() = default;
    virtual void subscribe(int message, ObserverInterface *observer);
    virtual void unsubsribe(int message, ObserverInterface *observer);
    virtual void notify(int message);

private:
    typedef std::vector<ObserverInterface *> ObserverList;
    typedef std::map<int, ObserverList> ObserverMap;
    ObserverMap mObservers_;
};

#endif //DESIGN_PATTERN_CPP_SUBJECT_INTERFACE_H
