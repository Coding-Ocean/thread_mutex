#include<iostream>
#include<thread>
using namespace std;

void dateWithAraragi(string name) {
	cout << name << "‚Íˆ¢—ÇX–Ø‚­‚ñ‚Éæ‚Á‚©‚Á‚½B\n";
	this_thread::sleep_for(1s);
	cout << name << "‚Íˆ¢—ÇX–Ø‚­‚ñ‚©‚ç~‚è‚½B\n";
	this_thread::sleep_for(1s);
}

int main() {
	thread th1(dateWithAraragi, "‰Hì");
	thread th2(dateWithAraragi, "‚Ð‚½‚¬");
	th1.join();
	th2.join();

	system("pause>0");
}