#include<iostream>
#include<thread>
using namespace std;

void dateWithAraragi(string name) {
	cout << name << "�͈��ǁX�؂���ɏ���������B\n";
	this_thread::sleep_for(1s);
	cout << name << "�͈��ǁX�؂��񂩂�~�肽�B\n";
	this_thread::sleep_for(1s);
}

int main() {
	thread th1(dateWithAraragi, "�H��");
	thread th2(dateWithAraragi, "�Ђ���");
	th1.join();
	th2.join();

	system("pause>0");
}