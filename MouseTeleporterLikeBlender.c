//This moves the mouse cursor's location when it hits an edge to the oppsite edge, whether horizontally or vertically, sort of like blender, except it goes beyond the app's window.

#include <windows.h>
int main() {
    int screenWidth = GetSystemMetrics(SM_CXSCREEN), screenHeight = GetSystemMetrics(SM_CYSCREEN);
    while (1) {
        POINT cursorPos; GetCursorPos(&cursorPos);
        if (cursorPos.x <= 0) {SetCursorPos(screenWidth - 1, cursorPos.y);}
         else if (cursorPos.x >= screenWidth - 1) {SetCursorPos(1, cursorPos.y);}
        if (cursorPos.y <= 0) {SetCursorPos(cursorPos.x, screenHeight - 1);} 
            else if (cursorPos.y >= screenHeight - 1) {SetCursorPos(cursorPos.x, 1);}
            Sleep(10);}
return 0;}
