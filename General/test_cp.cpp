#include<iostream>

class demo {
	int a, b, *p;
public:
	demo() {
		std::cout << "Using constructor demo()" << std::endl;
		p = new int;
	}
	//demo(demo &d) {
	//	std::cout << "Using constructor demo(demo &d)" << std::endl;
	//	a = d.a;
	//	b = d.b;
	//	p = new int;
	//	*p = *(d.p);
	//	*p = 996;
	//}
	void getData(int a, int b, int c) {
		a = a;
		b = b;
		*p = c;
	}
	void showData() {
		std::cout << "a = " << a << ", b = " << b << ", *p = " << *p << std::endl;
	}
};

int main() {
	demo obj1;
	obj1.getData(1, 2, 3);
	obj1.showData();
	demo obj2 = obj1;
	obj1.getData(10, 20, 30);
	// after change to obj1, *p of obj2 is changed too
	// because if we don't write demo(demo &d)
	// there is shallow copy between obj1 and obj2
	// p of obj2 points to the memory to which p of obj1 points
	// demo(demo &d) enables deep copy
	obj2.showData();
	std::cin.get();
	return 0;
}