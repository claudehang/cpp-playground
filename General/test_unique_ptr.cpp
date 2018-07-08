#include <iostream>
#include <memory>
#include <cassert>

int main() {
	// initialize an array that contains 4 unique_ptr objects
	// which are all set to nullptr
	std::unique_ptr<int> uptr[4];
	for (int i = 0; i < 4; i++) {
		assert(uptr[i] == nullptr);
		// add something into each unique_ptr object
		uptr[i] = std::unique_ptr<int>(new int(i));
	}
	// print out if we have made the changes as expected
	for (int j = 0; j < 4; j++) {
		std::cout << *uptr[j].get() << std::endl;
	}
	// freeze and wait for any keyborad input with ENTER to shut down
	std::cin.get();
}
