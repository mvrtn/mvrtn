#include "Player.h"
#include <Windows.h>
#pragma comment(lib, "Winmm.lib")
using namespace System::IO;
using namespace System::Windows::Forms;

//void Player::open()
//{
//	System::Windows::Forms::ListViewItem^ listViewItem;
//	OpenFileDialog^ OpenFileDialog1 = gcnew OpenFileDialog();
//	Stream^ myStream;
//

//	if (OpenFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
//	{
//		if ((myStream = OpenFileDialog1->OpenFile()) != nullptr)
//		{
	//		System::String^ strfilename = OpenFileDialog1->InitialDirectory + OpenFileDialog1->FileName;
			//MessageBox::Show(strfilename);
			//textBox1->Text = OpenFileDialog1->FileName;
			//listViewItem = gcnew Windows::Forms::ListViewItem(this->textBox1->Text);
			//this->listView1->Items->Add(this->listViewItem);
//			myStream->Close();
//		}
//}

//void Player::play()
//{
	//axWindowsMediaPlayer1->URL = OpenFileDialog1->FileName;
	//axWindowsMediaPlayer1->Ctlcontrols->play();
//}


//Player::Player()
//{
//}
