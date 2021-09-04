#include <iostream>
#include <stdio.h>

using namespace std;

int main() { 
	int Nhour, Nmin, Nsec, Ehour, Emin, Esec;

	int timeH, timeM, timeS;

	scanf_s("%d:%d:%d", &Nhour, &Nmin, &Nsec);
	scanf_s("%d:%d:%d", &Ehour, &Emin, &Esec);
	
	timeS =  Esec - Nsec;
	timeH = Ehour - Nhour;
	timeM = Emin - Nmin;
	
	if (timeS < 0) {
		timeS += 60;
		timeM--;
	}
	if (timeM < 0) {
		timeM += 60;
		timeH--;
	}
	if (timeH < 0) {
		timeH += 24;
	}
	printf("%02d:%02d:%02d", timeH, timeM, timeS);

	return 0;
}