#include "linked-list.h"

#include <iostream>

ListObject::ListObject(const char* label) : label(label) { }
ListObject::~ListObject() { }

void ListObject::traverse() {
    std::cout << "Label: " << label << '\n';
    
    if (pointingTo == nullptr) {
        std::cout << "points to noting else...";

        return;
    }

    pointingTo->traverse(); 
}

void ListObject::pointTo(ListObject* newObject) {
    pointingTo = newObject;
}

List::List() { }
List::~List() { }

