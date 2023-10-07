#include "SingleLinkedList.h"
#include "SingleLinkedList.cpp"
#include <iostream>
#include<cmath>
#include<list>
#include<string>

using namespace std;
int main() {
	try {
		SingleLinkedList<string> mySLL;
		string input1 = "10";
		string input2 = "20";
		string input3 = "30";
		string input4 = "40";
		string input5 = "50";
		string input6 = "60";
		//check whether or not the list is empty
		cout << "Is empty?(0 = not empty, 1 = empty): " << mySLL.empty() << endl;
		// use push_front and push_back functions to add numbers to mySLL.
		mySLL.push_front(input1);
		cout << "Front: " << mySLL.front() << " Back: " << mySLL.back() << endl;
		mySLL.push_front(input2);
		cout << "Front: " << mySLL.front() << " Back: " << mySLL.back() << endl;
		mySLL.push_front(input3);
		cout << "Front: " << mySLL.front() << " Back: " << mySLL.back() << endl;
		mySLL.push_front(input4);
		cout << "Front: " << mySLL.front() << " Back: " << mySLL.back() << endl;
		mySLL.push_back(input5);
		cout << "Front: " << mySLL.front() << " Back: " << mySLL.back() << endl;
		mySLL.push_front(input6);
		cout << "Front: " << mySLL.front() << " Back: " << mySLL.back() << endl;
		cout << "Is empty?(0 = not empty, 1 = empty): " << mySLL.empty() << endl;
		cout << "Insert 10 at index 0: ";
		//insert 10 at index 0.
		mySLL.insert(0, input1);
		cout << "new front is: " << mySLL.front() << endl;
		//insert 10 at index 3.
		mySLL.insert(3, input1);
		
		// remove the number at index 10, if it removes it successfully, it returns
		// 1, otherwise returns 0.
		cout << "remove the vaule at index 10 (0 = fail, 1 = sucess): ";
		cout << mySLL.remove(10) << endl;
		cout << "after using pop_front function, new front is: ";
		//pop the first number
		mySLL.pop_front();
		cout << "Front: " << mySLL.front() << " Back: " << mySLL.back() << endl;
		cout << "after using pop_back function, new back is: ";
		//pop the last number
		mySLL.pop_back();
		cout << "Front: " << mySLL.front() << " Back: " << mySLL.back() << endl;
		// find 10 in the list, return the index.
		cout << "use find function to find 10 is at index: " << mySLL.find("10") << endl;
		//remove the number at index 2, if it removes it successfully, it returns
		// 1, otherwise returns 0.
		cout << "remove the vaule at index 2 (0 = fail, 1 = sucess): ";
		cout << mySLL.remove(2) << endl;
		
	}
	catch (const exception& e) {
		cout << e.what();
	};
	return 0;

}