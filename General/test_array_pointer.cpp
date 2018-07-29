#include <iostream>


int getVal(int **p, int i) {
    return *p[i];
}


int main() {
    int* p[3];
    int a = 1, b = 2, c = 4;
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    std::cout << getVal(p, 2);
    std::cin.get();
}