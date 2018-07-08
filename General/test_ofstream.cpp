#include <iostream>
#include <fstream>
#include <string>

int main() {
	int a = 996;
	std::string fileName = "ofstream_out.txt";
	std::ofstream outFile(fileName.c_str());

	outFile << a << "end of writing!!";
	outFile.close();
}