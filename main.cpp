#include <iostream>
#include <windows.h>
#include <MMsystem.h>
#pragma comment(lib,"winmm.lib)

using namespace std;

int main()
{
    PlaySound("1.wav",NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
}
