//
// Created by Yijie Ma on 1/30/17.
//

#include <string>

#include "model.h"
#include "view.h"

//
// std output result of this test:
//
// view: 1 receives message: 0
// view: 2 receives message: 0
// view: 3 receives message: 1
// view: 2 receives message: 0
//
int main() {
    Model m;
    View v1("1");
    View v2("2");
    View v3("3");

    m.subscribe(Model::NAME, &v1);
    m.subscribe(Model::NAME, &v2);
    m.subscribe(Model::MAGIC, &v3);

    m.set_name("model1");
    m.set_magic(1024);
    m.unsubsribe(Model::NAME, &v1);
    m.set_name("model2");

    return 0;
}