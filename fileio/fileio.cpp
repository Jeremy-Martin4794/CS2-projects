// 2 functions for reading from files
// 9/26/2020
// Jeremy Martin

#include<iostream>
#include<fstream>

void readText();
void readData();

int main() {
	
	readText();
	readData();

}

void readText() {
	std::ifstream fin("fileio-text.txt");
	if (!fin) {
		std::cerr << "Could not open fileio-text.txt, exiting." << std::endl;
		exit(1);
	}
	char c;
	while (!fin.eof()) {
		fin.get(c);
		if (c == ' ')
			break;
		std::cout << c;
	}
	std::cout << std::endl;
	fin.close();
}

void readData() {
	std::ifstream fin("fileio-data-1.txt");
	if (!fin) {
		std::cerr << "Could not open fileio-data-1.txt, exiting." << std::endl;
		exit(1);
	}
	const int cap = 4;
	int temp1[cap];
	int temp2[cap];
	int sum[cap];
	for (int i = 0; i < 4; ++i) {
		temp1[i] = -1;
		temp2[i] = -1;
		sum[i] = -1;
	}
	char c;
	int i = 0;
	int find = 0; 
	while (!fin.eof()) {
		fin >> c;
		if (c != ';' && find == 0) {
			temp1[cap - 1 - i] = c - '0';
		}
		else if (c != ';' && find != 0) {
			temp2[cap - 1 - i] = c - '0';
		}
		else if (c == ';' && find == 0) {
			find = -1;
			i = 0;
			continue;
		}
		else if (c == ';' && find != 0) {
			int i1 = 0;
			for (int i = cap - 1; i > -1; --i) {
				if (temp1[i] == -1) {
					i1 = i + 1;
					break;
				}
			}
			int i2 = 0;
			for (int i = cap - 1; i > -1; --i) {
				if (temp2[i] == -1) {
					i2 = i + 1;
					break;
				}
			}
		
			for (int i = 0; i < cap; ++i) {
				if (i1 + i < cap)
					if (sum[i] == -1) sum[i] = temp1[i1 + i];
					else sum[i] = sum[i] + temp1[i1 + i];
				if (i2 + i < cap)
					if (sum[i] == -1) sum[i] = temp2[i2 + i];
					else sum[i] = sum[i] + temp2[i2 + i]; 
				if (sum[i] > 9) {
					int remainder = sum[i];
					sum[i] = remainder%10;
					remainder = remainder / 10;
					sum[i + 1] = remainder + sum[i + 1];
				}
			}
			bool find = false;
			for (int i = cap - 1; i > -1; --i) {
					if (sum[i] != -1) 
						std::cout << sum[i];
			}
			std::cout << std::endl;
			break;
		}
		++i;
	}
	fin.close();
}
