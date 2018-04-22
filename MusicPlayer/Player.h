#pragma once
ref class Player
{
private:
	AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	OpenFileDialog^ OpenFileDialog1 = gcnew OpenFileDialog();
	void open();
	//void play();
	//void Pause();
	//void Stop();
	//void next();
	//void previous();


public:
	//void play();
	//Player();
};

