#include <string>

class ListObject
{
public:
    ListObject(const char* label);
    ~ListObject();
    
    void traverse();

    void pointTo(ListObject* newObject);

private:
    const char* label;
    ListObject* pointingTo = nullptr;
};

class List
{
public:
    List();
    ~List();

    int getLength();

    void show();

    void append(std::string& label);
    void insert();
    void deleteFromIndex(int& index);

    void push();
    void pop();

private:
    ListObject* firstItem = nullptr;
    int length = 0;
};
