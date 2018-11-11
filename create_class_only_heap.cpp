#include <iostream>
using namespace std;

class HeapOnly 
{
public:
    static HeapOnly* CreateObject()
    {
        return new HeapOnly;
    }

private:
    HeapOnly (){}              //构造函数私有化,也就不能用new了
    HeapOnly(const HeapOnly&);   //防拷贝
    HeapOnly& operator=(HeapOnly const&);  //防赋值
};
int main()
{
    HeapOnly* p=HeapOnly::CreateObject();  //给出一个接口，可以动态创建
    return 0;
}
