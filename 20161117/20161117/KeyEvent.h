#pragma once
#include <windows.h>
#include <iostream>
using namespace std;
class KeyEvent {
private:
	HANDLE hln;
	COORD KeyWhere;
	DWORD EventCount;
	INPUT_RECORD InRec;
	DWORD NumRead;
	int downKey;
public:
	KeyEvent() {
		hln = GetStdHandle(STD_INPUT_HANDLE);
		EventCount = 1;
	}
	int getkey() {
		ReadConsoleInput(hln, &InRec, 1, &NumRead);
		if (InRec.Event.KeyEvent.bKeyDown) {
			downKey = InRec.Event.KeyEvent.wVirtualKeyCode;
			return downKey;
		 }else{
			return -1;
		}
		return -1;
	}
};
/*
int main() {
	KeyEvent k;
	int i;
	while (1) {
		i = k.getkey();
		if (i != -1)cout << i << endl;
	}
	return 0;
}
*/