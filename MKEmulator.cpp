#include <Windows.h>
#include <vector>

#define Function _declspec(dllexport) 

extern "C" {
    Function void MoveMouse(int x, int y, int rounds, int wTime) {
            INPUT buffer;
            ZeroMemory(&buffer, sizeof(buffer));
            buffer.type = INPUT_MOUSE;
            buffer.mi.dx = x;
            buffer.mi.dy = y;
            buffer.mi.mouseData = 0;
            buffer.mi.dwFlags = MOUSEEVENTF_MOVE;
            buffer.mi.time = 0;
            buffer.mi.dwExtraInfo = 0;
            for (int i = 0; i <= rounds; i++) {
                Sleep(wTime);
                SendInput(1, &buffer, sizeof(INPUT));
            }
        }

    Function void EmulateKeyPress(char key_, int delay)
    {
                    SHORT key;
                    UINT mappedkey; 
                    INPUT input = { 0 };
                    key = VkKeyScan(key_);
                    mappedkey = MapVirtualKey(LOBYTE(key), 0);
                    input.type = INPUT_KEYBOARD;
                    input.ki.dwFlags = KEYEVENTF_SCANCODE;
                    input.ki.wScan = mappedkey;
                    SendInput(1, &input, sizeof(input));
                    Sleep(delay);
                    input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
                    SendInput(1, &input, sizeof(input)); 
    }
}
