#include<iostream>
#include<thread>
using namespace std;

int cnt = 0;
void countup() {
	for (int i = 0; i < 1000; ++i) {
		cnt++;
		//�X���[�v0�b�ł����s���͏u�ԓI�ɕ�������
		this_thread::sleep_for(0s);
	}
}

int main() {
	thread th1(countup);
	thread th2(countup);
	th1.join();
	th2.join();
	cout << cnt << "��J�E���g�A�b�v�����B\n";

	system("pause>0");
}