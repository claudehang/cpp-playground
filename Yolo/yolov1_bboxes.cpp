#include <iostream>

int main() {
	int classes = 20, num = 2, stride = 7;
	for (int i = 0; i < stride * stride; ++i) {
		int row = i / stride;
		int col = i % stride;
		for (int n = 0; n < num; ++n) {
			int index = i*num + n;
			int p_index = stride*stride*classes + i*num + n;
			int box_index = stride*stride*(classes + num) + (i*num + n)*4;
			std::cout << index << "\t" << p_index << "\t" << box_index << std::endl;
		}
	}
	std::cin.get();
}