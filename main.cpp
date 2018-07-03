#include "rotor.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <process.h>
#define cls system("cls");
#define pau system("pause");
using namespace std;
int main() {
	int ch;
	cls
	cout << "\n\n\n\n\n\n\n\t\t\t\tWelcome to the Enigma Machine Simulator!\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
	pau
	rotor object;
	start:
	cls
	cout << "Main Menu:" << endl << "1. View Loaded Rotors" << "\n2. Encrypt / Decrypt" << "\n3. Setup" << "\n4. Reset Rotors"<< "\n5. About" << "\n6. Credits" << "\n7. Exit";
	cout << "\nYour Choice: ";
	cin >> ch;
	string data;
	switch(ch){
		case 1:
			object.show_rotors();
			goto start;
			break;
		case 2:
			cls
			cin >> data;
			char orig[100];
			strcpy(orig,data.c_str());
			for(int i=0; i<strlen(orig); i++) {
				if(orig[i] > 90) {
					orig[i] = char(int(orig[i]) - 32);
				}
			}
			cls
			char notche[5];
			notche[0] = 'Q';
			notche[1] = 'E';
			notche[2] = 'V';
			notche[3] = 'J';
			notche[4] = 'Z';
			char notch[2];
			cout << "The encrypted data is: ";
			if(object.roch == 1){
				if(object.rech == 1) {
					notch[0] = notche[2];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot1, object.rot2, object.rot3, object.refb, object.rotb1, object.rotb2, object.rotb3, notch);
					}
				}
				if(object.rech == 2) {
					notch[0] = notche[2];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot1, object.rot2, object.rot3, object.refc, object.rotb1, object.rotb2, object.rotb3, notch);
					}
				}
				if(object.rech == 3) {
					notch[0] = notche[2];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot1, object.rot2, object.rot3, object.refbb, object.rotb1, object.rotb2, object.rotb3, notch);
					}
				}
				if(object.rech == 4) {
					notch[0] = notche[2];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot1, object.rot2, object.rot3, object.refcc, object.rotb1, object.rotb2, object.rotb3, notch);
					}
				}
			}
			if(object.roch == 2){
				if(object.rech == 1) {
					notch[0] = notche[1];
					notch[1] = notche[2];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot1, object.rot3, object.rot2, object.refb, object.rotb1, object.rotb3, object.rotb2, notch);
					}
				}
				if(object.rech == 2) {
					notch[0] = notche[1];
					notch[1] = notche[2];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot1, object.rot3, object.rot2, object.refc, object.rotb1, object.rotb3, object.rotb2, notch);
					}
				}
				if(object.rech == 3) {
					notch[0] = notche[1];
					notch[1] = notche[2];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot1, object.rot3, object.rot2, object.refbb, object.rotb1, object.rotb3, object.rotb2, notch);
					}
				}
				if(object.rech == 4) {
					notch[0] = notche[1];
					notch[1] = notche[2];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot1, object.rot3, object.rot2, object.refcc, object.rotb1, object.rotb3, object.rotb2, notch);
					}
				}
			}
			if(object.roch == 3){
				if(object.rech == 1) {
					notch[0] = notche[1];
					notch[1] = notche[0];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot3, object.rot1, object.rot2, object.refb, object.rotb3, object.rotb1, object.rotb2, notch);
					}
				}
				if(object.rech == 2) {
					notch[0] = notche[1];
					notch[1] = notche[0];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot3, object.rot1, object.rot2, object.refc, object.rotb3, object.rotb1, object.rotb2, notch);
					}
				}
				if(object.rech == 3) {
					notch[0] = notche[1];
					notch[1] = notche[0];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot3, object.rot1, object.rot2, object.refbb, object.rotb3, object.rotb1, object.rotb2, notch);
					}
				}
				if(object.rech == 4) {
					notch[0] = notche[1];
					notch[1] = notche[0];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot3, object.rot1, object.rot2, object.refcc, object.rotb3, object.rotb1, object.rotb2, notch);
					}
				}
			}
			if(object.roch == 4){
				if(object.rech == 1) {
					notch[0] = notche[0];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot3, object.rot2, object.rot1, object.refb, object.rotb3, object.rotb2, object.rotb1, notch);
					}
				}
				if(object.rech == 2) {
					notch[0] = notche[0];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot3, object.rot2, object.rot1, object.refc, object.rotb3, object.rotb2, object.rotb1, notch);
					}
				}
				if(object.rech == 3) {
					notch[0] = notche[0];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot3, object.rot2, object.rot1, object.refbb, object.rotb3, object.rotb2, object.rotb1, notch);
					}
				}
				if(object.rech == 4) {
					notch[0] = notche[0];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot3, object.rot2, object.rot1, object.refcc, object.rotb3, object.rotb2, object.rotb1, notch);
					}
				}
			}
			if(object.roch == 5){
				if(object.rech == 1) {
					notch[0] = notche[0];
					notch[1] = notche[2];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot2, object.rot3, object.rot1, object.refb, object.rotb2, object.rotb3, object.rotb1, notch);
					}
				}
				if(object.rech == 2) {
					notch[0] = notche[0];
					notch[1] = notche[2];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot2, object.rot3, object.rot1, object.refc, object.rotb2, object.rotb3, object.rotb1, notch);
					}
				}
				if(object.rech == 3) {
					notch[0] = notche[0];
					notch[1] = notche[2];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot2, object.rot3, object.rot1, object.refbb, object.rotb2, object.rotb3, object.rotb1, notch);
					}
				}
				if(object.rech == 4) {
					notch[0] = notche[0];
					notch[1] = notche[2];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot2, object.rot3, object.rot1, object.refcc, object.rotb2, object.rotb3, object.rotb1, notch);
					}
				}
			}
			if(object.roch == 6){
				if(object.rech == 1) {
					notch[0] = notche[2];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot2, object.rot1, object.rot3, object.refb, object.rotb2, object.rotb1, object.rotb3, notch);
					}
				}
				if(object.rech == 2) {
					notch[0] = notche[2];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot2, object.rot1, object.rot3, object.refc, object.rotb2, object.rotb1, object.rotb3, notch);
					}
				}
				if(object.rech == 3) {
					notch[0] = notche[2];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot2, object.rot1, object.rot3, object.refbb, object.rotb2, object.rotb1, object.rotb3, notch);
					}
				}
				if(object.rech == 4) {
					notch[0] = notche[2];
					notch[1] = notche[1];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotora(orig[i], object.rot2, object.rot1, object.rot3, object.refcc, object.rotb2, object.rotb1, object.rotb3, notch);
					}
				}
			}
			if(object.roch == 7){
				if(object.rech == 1) {
					notch[0] = notche[4];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotorb(orig[i], object.rot4, object.rot5, object.refb, object.rotb4, object.rotb5, notch);
					}
				}
				if(object.rech == 2) {
					notch[0] = notche[4];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotorb(orig[i], object.rot4, object.rot5, object.refc, object.rotb4, object.rotb5, notch);
					}
				}
				if(object.rech == 3) {
					notch[0] = notche[4];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotorb(orig[i], object.rot4, object.rot5, object.refbb, object.rotb4, object.rotb5, notch);
					}
				}
				if(object.rech == 4) {
					notch[0] = notche[4];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotorb(orig[i], object.rot4, object.rot5, object.refcc, object.rotb4, object.rotb5, notch);
					}
				}
			}
			if(object.roch == 8){
				if(object.rech == 1) {
					notch[0] = notche[3];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotorb(orig[i], object.rot5, object.rot4, object.refb, object.rotb5, object.rotb4, notch);
					}
				}
				if(object.rech == 2) {
					notch[0] = notche[3];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotorb(orig[i], object.rot5, object.rot4, object.refc, object.rotb5, object.rotb4, notch);
					}
				}
				if(object.rech == 3) {
					notch[0] = notche[3];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotorb(orig[i], object.rot5, object.rot4, object.refbb, object.rotb5, object.rotb4, notch);
					}
				}
				if(object.rech == 4) {
					notch[0] = notche[3];
					for(int i=0; i<strlen(orig); i++) {
						cout << object.move_rotorb(orig[i], object.rot5, object.rot4, object.refcc, object.rotb5, object.rotb4, notch);
					}
				}
			}
			cout << endl << endl;
			pau;
			goto start;
			break;
		case 3:
			object.setup();
			goto start;
			break;
		case 4:
			object.reset_rotors();
			cls
			cout << "Rotors Reset!\n\n";
			pau
			goto start;
			break;
		case 5:
			cls
			cout << "The Enigma machines were a series of electro-mechanical rotor cipher machines developed and used in the early- to mid-20th century to protect commercial, diplomatic and military communication. Enigma was invented by the German engineer Arthur Scherbius at the end of World War I.[1] Early models were used commercially from the early 1920s, and adopted by military and government services of several countries, most notably Nazi Germany before and during World War II.[2] Several different Enigma models were produced, but the German military models, having a plugboard, were the most complex. Japanese and Italian models were also in use. This particular simulator combines rotors and reflectors found in 'Enigma 1' produced by the germans, and the 'M4' enigma, specially designed for the german navy.";
			cout << endl << endl;
			pau		
			goto start;	
			break;
		case 6:
			cls
			cout << "This project for a realistic enigma machine simulator was built by:" << "\n\nfirst2last";
			cout << endl << endl;
			pau
			goto start;
			break;
		case 7:
			cls
			cout << "Cleaning up...\n\n";
			pau
			exit(0);
			break;
		default:
			cls
			cout << "Incorrect Choice!" << endl;
			pau
			goto start;
	}
	return 0;
}
