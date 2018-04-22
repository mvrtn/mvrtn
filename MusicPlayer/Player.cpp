#include "Player.h"
#include <Windows.h>
#pragma comment(lib, "Winmm.lib")
using namespace System::IO;
using namespace System::Windows::Forms;

void Player::open()

{ if (axWindowsMediaPlayer1->URL != OpenFileDialog1->FileName)
axWindowsMediaPlayer1->URL = OpenFileDialog1->FileName;

axWindowsMediaPlayer1->Ctlcontrols->play();


}


//Player::Player()
//{

//}
