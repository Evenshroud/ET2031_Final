#include <Windows.h>
#include <winuser.h>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int NumberKeyShift(int KEY){
	switch (KEY){
	case 48://[0]
		KEY -= 7;
		return KEY;
    case 49://[1]
        KEY -= 16;
        return KEY;
    case 50://[2]
        KEY += 14;
        return KEY;
    case 51://[3]
        KEY -= 16;
        return KEY;
    case 52://[4]
        KEY -= 16;
        return KEY;
    case 53://[5]
        KEY -= 16;
        return KEY;
    case 54: //[6]
        KEY += 40;
        return KEY;
    case 55: //[7]
        KEY  -=16;
        return KEY;
    case 56: //[8]
        KEY -= 14;
        return KEY;
    case 57: //[9]
        KEY -= 13;
        return KEY;
    default:
        return 0;
    };
}

int MiscKeyShift(int KEY){
    switch (KEY){
    case 96: //[`]
        KEY += 30;
        return KEY;
    case 45: //[-]
        KEY += 50;
        return KEY;
    case 61: //[=]
        KEY -= 18;
        return KEY;
    case 91://[[]
        KEY += 32;
        return KEY;
    case 92://[\]
        KEY += 32;
        return KEY;
    case 93://[]]
        KEY += 32;
        return KEY;
    case 59://[;]
        KEY -= 1;
        return KEY;
    case 39://[']
        KEY -= 5;
        return KEY;
    case 44://[,]
        KEY += 16;
        return KEY;
    case 46://[.]
        KEY += 16;
        return KEY;
    case 47://[/]
        KEY += 16;
        return KEY;
    default:
        return 0;
    };
}