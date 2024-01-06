#include <Windows.h>
#include <winuser.h>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

bool NumberKeyShift(int KEY){
	switch (KEY){
	case 48://[0]
		LOG(")");
        return true;
    case 49://[1]
        LOG("!");
        return true;
    case 50://[2]
        LOG("@");
        return true;
    case 51://[3]
        LOG("#");
        return true;
    case 52://[4]
        LOG("$");
        return true;
    case 53://[5]
        LOG("%");
        return true;
    case 54: //[6]
        LOG("^");
        return true;
    case 55: //[7]
        LOG("&");
        return true;
    case 56: //[8]
        LOG("*");
        return true;
    case 57: //[9]
        LOG("(");
        return true;
    default:
        return false;
    };
}

int MiscKeyShift(int KEY){
    switch (KEY){
    case 96: //[`]
        LOG("~");
        return true;
    case 45: //[-]
        LOG("_");
        return true;
    case 61: //[=]
        LOG("+");
        return true;
    case 91://[[]
        LOG("{");
        return true;
    case 92://[\]
        LOG("|");
        return true;
    case 93://[]]
        LOG("}");
        return true;
    case 59://[;]
        LOG(":");
        return true;
    case 39://[']
        LOG("\"");
        return true;
    case 44://[,]
        LOG("<");
        return true;
    case 46://[.]
        LOG(">");
        return true;
    case 47://[/]
        LOG("?");
        return true;
    default:
        return false;
    };
}