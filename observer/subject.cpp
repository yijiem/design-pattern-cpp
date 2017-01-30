//
// Created by Yijie Ma on 1/29/17.
//

#include "subject_interface.h"

void SubjectInterface::subscribe(int message, ObserverInterface *observer) {
    mObservers_[message].push_back(observer);
}

void SubjectInterface::unsubsribe(int message, ObserverInterface *observer) {
    if (mObservers_.count(message)) {
        for (auto it = mObservers_[message].begin(); it != mObservers_[message].end(); ++it) {
            if (*it == observer) {
                mObservers_[message].erase(it);
                return;
            }
        }
    }
}

void SubjectInterface::notify(int message) {
    if (mObservers_.count(message)) {
        for (auto it = mObservers_[message].begin(); it != mObservers_[message].end(); ++it) {
            (*it)->update(message);
        }
    }
}