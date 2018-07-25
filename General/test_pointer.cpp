#include <iostream>

void assign_p_a(int *p, int value) {
    int *q, a;
    a = value;
    q = &a;
    p = q;
}

void assign_p_b(int *&p, int value) {
    int *q, a;
    a = value;
    q = &a;
    p = q;
}

int main() {
    int a, *p;
    a = 2;
    p = &a;  // claim pointer p with initialization

    std::cout << *p << std::endl;
    assign_p_a(p, 3);
    std::cout << *p << std::endl;
    assign_p_b(p, 3);
    std::cout << *p << std::endl;

    std::cout << "==========" << std::endl;

    int *q;  // just claim pointer q without initialization

    // assgin_p_a(q, 3) will give error
    //assign_p_a(q, 3);
    //std::cout << *q << std::endl;
    assign_p_b(q, 3);
    std::cout << *q << std::endl;
    std::cin.get();
}