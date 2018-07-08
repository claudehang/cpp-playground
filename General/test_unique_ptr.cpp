#include <iostream>
#include <memory>
#include <cassert>

int main() {
	std::unique_ptr<int> uptr[4];
	for (int i = 0; i < 4; i++) {
		assert(uptr[i] == nullptr);
		uptr[i] = std::unique_ptr<int>(new int(i));
	}
	for (int j = 0; j < 4; j++) {
		std::cout << *uptr[j].get() << std::endl;
	}
	std::cin.get();
}