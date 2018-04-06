#include <memory>
#include <new>

struct DummyClass { int x; };

int main()
{
    auto ptr = new(std::nothrow) DummyClass;
    delete ptr;
}

