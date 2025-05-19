// RandomGenerator.hpp
// A modern C++ header-only random number generator
// https://github.com/Batanounyy/Random-Number-Generator/
// This code is licensed under the MIT License.
// Copyright (c) 2025 Abdelrahman ElBatanouny
// Happy coding!💻
#include "../RandomGenerator.hpp"
#include <iostream>
using namespace std;
int main() {
	bool Run = 1;
	RandomGenerator rng;
	while (Run) {
		cout << "Random Number Generator" << endl;
		cout << "1. Generate Random Integer" << endl;
		cout << "2. Generate Random Float" << endl;
		cout << "3. Generate Random Double" << endl;
		cout << "4. Generate Random Boolean" << endl;
		cout << "5. Exit" << endl;
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			int min, max;
			cout << "Enter min and max values: ";
			cin >> min >> max;
			cout << "Random Integer: " << rng.getInt(min, max) << endl;
			break;
		}
		case 2: {
			float min, max;
			cout << "Enter min and max values: ";
			cin >> min >> max;
			cout << "Random Float: " << rng.getFloat(min, max) << endl;
			break;
		}
		case 3: {
			double min, max;
			cout << "Enter min and max values: ";
			cin >> min >> max;
			cout << "Random Double: " << rng.getDouble(min, max) << endl;
			break;
		}
		case 4:
			cout << "Random Boolean: " << rng.getBool() << endl;
			break;
		case 5:
			Run = 0;
			break;
		default:
			cout << "Invalid choice. Please try again." << endl;
		}
  }
    return 0;
}
