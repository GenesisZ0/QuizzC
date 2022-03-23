#include <iostream>
#include <Windows.h>
#include<mmsystem.h>


using namespace std;

int main() {
	int r;
	string str = "QUIZZ";

	int j = 100;

	cout << "                ";
	for (int i = 0; i < str.size(); i++) {
		cout << "  ";
		cout << str[i];
		Beep(j, 300);
		Sleep(500);
	}

	
	Sleep(1000);

	PlaySound(TEXT("Katana.wav"), NULL, SND_ASYNC);

	system("cls");
;
	Sleep(100);
	cout << "                 premiere question:  " << endl;
	Beep(100, 300);
	Sleep(1000);
	cout << "A qui apartien se cris ";



	Sleep(10000);
	system("cls");

	PlaySound(TEXT("wouaf.wav"), NULL, SND_ASYNC);
	
	
	Sleep(1000);
	Beep(200, 300);
	cout << "1.Timothee";
	Sleep(1000);
	Beep(200, 300);
	cout << "     2.La daronne a Timothee "<< endl;
	Sleep(1000);
	Beep(200, 300);
	cout << "3.un chien";
	Sleep(1000);
	cout << "     4.Zemmour" << endl;;
	Beep(200, 300);
	
	cout << "La reponse"; cin >> r;

	switch (r)
	{
	default:
		cout << "Choix indisponible";
		break;
	case 1 :
		cout << "En vrai oui mais non";
		break;
	case 2 :
		cout << "Pas les daronnes";
		break;
	case 3:
		PlaySound(TEXT("Success.wav"), NULL, SND_ASYNC);
		cout << "en vrai ta heziter";
		break;
	case 4 :
		cout << "Pire";
		break;
	}

	return 0;
}  