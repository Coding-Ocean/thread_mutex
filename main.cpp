#include<iostream>
#include<thread>
using namespace std;

void dateWithAraragi(string name) {
	cout << name << "は阿良々木くんに乗っかった。\n";
	this_thread::sleep_for(1s);
	cout << name << "は阿良々木くんから降りた。\n";
	this_thread::sleep_for(1s);
}

int main() {
	thread th1(dateWithAraragi, "羽川");
	thread th2(dateWithAraragi, "ひたぎ");
	th1.join();
	th2.join();

	system("pause>0");
}