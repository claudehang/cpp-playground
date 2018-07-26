#include <iostream>

struct PointerStruct {
    int v;
    int *p;
};

// Demonstrates that by directly passing a struct into a function
// its pointer member can be permanently changed
void changePointerStruct(int val, PointerStruct ps) {
    std::cout << "Entering changePointerStruct() function" << std::endl;
    std::cout << ps.v << " and " << *(ps.p) << std::endl;  // The parameter ps is a copy of its argument
                                                           // Note that this is a shallow copy
                                                           // The parameter ps has a new int member in memory
                                                           // but its pointer member points to the same memory to which the argument's pointer points
    *(ps.p) = val;
    std::cout << "Leaving changePointerStruct() function" << std::endl;
}


int main() {
    PointerStruct ps;
    ps.v = 1;
    int a = 2;
    ps.p = &a;

    std::cout << ps.v << " and " << *(ps.p) << std::endl;
    changePointerStruct(3, ps);
    std::cout << ps.v << " and " << *(ps.p) << std::endl;
    std::cin.get();
}