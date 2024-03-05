// test1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <chrono>
#include <thread>
#include "state/TestControl.hpp"

int main()
{
	TestControl tc;
	tc.main();
	return 0;
}
