#include <iostream>
using namespace std;

class StackOnly 
{
public:
    StackOnly ()
    {}
private:
    void* operator new(size_t size_t);
    void operator delete(void* p);            //因为new和delete在底层会调用这两个函数，实际是屏蔽了new和delete
};
int main()
{
    StackOnly* p = new StackOnly;     //错误
    StackOnly d1;                   //可以
    return 0;
}
