#include<iostream>
#include<thread>
using namespace std;

int cnt = 0;
void countup() {
	for (int i = 0; i < 1000; ++i) {
		cnt++;
		//スリープ0秒でも実行権は瞬間的に放棄する
		this_thread::sleep_for(0s);
	}
}

int main() {
	thread th1(countup);
	thread th2(countup);
	th1.join();
	th2.join();
	cout << cnt << "回カウントアップした。\n";

	system("pause>0");
}