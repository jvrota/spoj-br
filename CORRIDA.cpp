#include <iostream>
using namespace std;

int main () {
int numerodecarros, numerodevoltas, primeiro = -1, segundo = -1, terceiro = -1, carro, temp;

	long t, PrimeiroTempo = -1, SegundoTempo = -1, TerceiroTempo = -1, TempodeParada, timeTemp;

	cin >> numerodecarros >> numerodevoltas; // número de carros e número de voltas
	for (int i = 0; i < numerodecarros; i++) {

		carro = i + 1;
		TempodeParada = 0;
		for (int j = 0; j < numerodevoltas; j++) {
			cin >> timeTemp;
			TempodeParada += timeTemp;
		}

		temp = 0;
		timeTemp = 0;

		if (TempodeParada < PrimeiroTempo || PrimeiroTempo == -1) {

			if (PrimeiroTempo != - 1) {
				temp = primeiro;
				timeTemp = PrimeiroTempo;
			}

			primeiro = carro;
			PrimeiroTempo = TempodeParada;

			if (temp != 0) {
				carro = temp;
				TempodeParada = timeTemp;

				temp = 0;
				timeTemp = 0;
			}
		}

		if ((TempodeParada < SegundoTempo || SegundoTempo == -1) && TempodeParada != PrimeiroTempo) {

			if (SegundoTempo != -1) {
				temp = segundo;
				timeTemp = SegundoTempo;
			}

			segundo = carro;
			SegundoTempo = TempodeParada;

			if (temp != 0) {
				carro = temp;
				TempodeParada = timeTemp;

				temp = 0;
				timeTemp = 0;
			}
		}

		if ((TempodeParada < TerceiroTempo || TerceiroTempo == - 1) && TempodeParada != SegundoTempo && TempodeParada != PrimeiroTempo) {
			terceiro = carro;
			TerceiroTempo = TempodeParada;
		}
	}

	cout << primeiro << endl << segundo << endl << terceiro << endl; //posições

	return 0;
}


//74 111 227 111 32 86 105 99 116 111 114 32 82 111 100 114 105 103 117 101 115 32 82 111 116 97 110 100 97 110 111 10 83 105 115 116 101 109 97 115 32 100 101 32 73 110 102 111 114 109 97 231 227 111 32 50 48 49 55 46 49


