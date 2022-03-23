#include <iostream>
#include <Windows.h>
#include<mmsystem.h>

bool verif = false;

using namespace std;


void question() {
	int r;
	
	Sleep(100);
	cout << "                  question audio :  " << endl;
	Beep(100, 300);
	Sleep(1000);
	cout << "A qui apartien se cris " << endl<<endl;
	
	PlaySound(TEXT("wouaf.wav"), NULL, SND_SYNC);


	Sleep(1000);
	Beep(200, 300);
	cout << "1.Timothee";
	Sleep(1000);
	Beep(200, 300);
	cout << "     2.La daronne a Timothee " << endl << endl;
	Sleep(1000);
	Beep(200, 300);
	cout << "3.un chien";
	Sleep(1000);
	cout << "     4.Zemmour" << endl << endl;
	Beep(200, 300);

	cout << "La reponse : "; cin >> r;

	switch (r)
	{
	default:
		cout << "Choix indisponible";
		break;
	case 1:
		cout << "En vrai oui mais non";
		verif = false;
		break;
	case 2:
		cout << "Pas les daronnes";
		verif = false;
		break;
	case 3:
		PlaySound(TEXT("Success.wav"), NULL, SND_ASYNC);
		cout << "en vrai ta heziter";
		verif = true;
		break;
	case 4:
		cout << "Pire";
		verif = false;
		break;

	}
	

}
void question2() {
	int r;

	Sleep(100);
	cout << "                  question logique :  " << endl;
	Beep(100, 300);
	Sleep(1000);
	cout << "Qu'elle est le meilleur moteur  " << endl << endl;

	Sleep(1000);
	Beep(200, 300);
	cout << "1.Atmosphir";
	Sleep(1000);
	Beep(200, 300);
	cout << "     2.Unity " << endl << endl;
	Sleep(1000);
	Beep(200, 300);
	cout << "3.Phaser3";
	Sleep(1000);
	cout << "     4.Unreal" << endl << endl;
	Beep(200, 300);

	cout << "La reponse : "; cin >> r;

	switch (r)
	{
	default:
		cout << "Fc cruz mais nan";
		break;
	case 1:
		cout << "Fc cruz mais nan";
		verif = false;
		break;
	case 2:
		cout << "Unity = Unreal du bled (la meme lettre complot ?)";
		verif = false;
		break;
	case 3:
		cout << "Soon les projet de fin d'année";
		verif = false;
		break;
	case 4:
		PlaySound(TEXT("Success.wav"), NULL, SND_ASYNC);
		cout << "BG";
		verif = true;
		break;
	}
}


int main() {
	int vie = 3;
	int r;
	string str = "QUIZZ";

	int j = 100;

	cout << "                ";
	for (int i = 0; i < str.size(); i++) {
		cout << "  ";
		cout << str[i];
		Beep(200, 300);
		Sleep(350);
	}


	PlaySound(TEXT("Katana.wav"), NULL, SND_ASYNC);
;
    Sleep(1000);
	system("cls");

	return 0;
}  

