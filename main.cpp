#include <iostream>
#include <mmsystem.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
  PlaySound(TEXT("file name.wav"),NULL , FILENAME | SND_SYNC);
  system("pause");
  return 0;
}
