#include <iostream>
#include <Windows.h>

using namespace std;;

void SetWindowSize(SHORT width, SHORT height)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    SMALL_RECT WindowSize;
    WindowSize.Top = 0;
    WindowSize.Left = 0;
    WindowSize.Right = width ;
    WindowSize.Bottom = height;

    SetConsoleWindowInfo(hStdout, &WindowSize);
}

int main()
{
    SetWindowSize(68, 15);
    
    return 0;
}