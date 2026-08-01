#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

main()
{
	system("chcp 65001");
	for(int i = 10; i >= 0; i--)
	{
		cout << i << endl;
		this_thread::sleep_for(chrono::seconds(1)); //delay 1 seg.
	}
	
	cout << "Lançamento realizado!";
}