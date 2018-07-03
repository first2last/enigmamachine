#include "rotor.h"
#include <iostream>
#include <string.h>
#include <fstream>
#define cls system("cls");
#define pau system("pause");
using namespace std;
char tempa;
char standard[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void rotor::show_rotors() {
	cls
	cout << "Loaded Rotor's and Reflector's:\n\n";
	cout << "Key: ABCDEFGHIJKLMNOPQRSTUVWXYZ" << endl;
	cout << "Plugboard: ";
	for(int i=0; i<26; i++){
		cout << plugboard[i];
	}
	cout << endl;
	cout << "Rotor 1: ";
	for(int i=0; i<26; i++){
		cout << rot1[i];
	}
	cout << endl;
	cout << "Rotor 2: ";
	for(int i=0; i<26; i++){
		cout << rot2[i];
	}
	cout << endl;
	cout << "Rotor 3: ";
	for(int i=0; i<26; i++){
		cout << rot3[i];
	}
	cout << endl;
	cout << "Rotor 4: ";
	for(int i=0; i<26; i++){
		cout << rot4[i];
	}
	cout << endl;
	cout << "Rotor 5: ";
	for(int i=0; i<26; i++){
		cout << rot5[i];
	}
	cout << endl;
	cout << "Rotor 1 Inverse: ";
	for(int i=0; i<26; i++){
		cout << rotb1[i];
	}
	cout << endl;
	cout << "Rotor 2 Inverse: ";
	for(int i=0; i<26; i++){
		cout << rotb2[i];
	}
	cout << endl;
	cout << "Rotor 3 Inverse: ";
	for(int i=0; i<26; i++){
		cout << rotb3[i];
	}
	cout << endl;
	cout << "Rotor 4 Inverse: ";
	for(int i=0; i<26; i++){
		cout << rotb4[i];
	}
	cout << endl;
	cout << "Rotor 5 Inverse: ";
	for(int i=0; i<26; i++){
		cout << rotb5[i];
	}
	cout << endl;
	cout << "Reflector B: ";
	for(int i=0; i<26; i++){
		cout << refb[i];
	}
	cout << endl;
	cout << "Reflector C: ";
	for(int i=0; i<26; i++){
		cout << refc[i];
	}
	cout << endl;
	cout << "Reflector B thin: ";
	for(int i=0; i<26; i++){
		cout << refbb[i];
	}
	cout << endl;
	cout << "Reflector C thin: ";
	for(int i=0; i<26; i++){
		cout << refcc[i];
	}
	cout << endl << endl;
	pau
}
int rotor::get_rotors() {
	char dat[26];
	fstream read("rotors.sys", ios::in);
	if(read){
		read >> dat;		//-------------------- ROTORS ----------------------//
		strcpy(rot1,dat);
		read >> dat;
		strcat(rot2,dat);
		read >> dat;
		strcat(rot3,dat);
		read >> dat;
		strcat(rot4,dat);
		read >> dat;
		strcat(rot5,dat);
		read >> dat;		//------------------- ROTOR INVERSE -------------------//
		strcpy(rotb1,dat);
		read >> dat;
		strcat(rotb2,dat);
		read >> dat;
		strcat(rotb3,dat);
		read >> dat;
		strcat(rotb4,dat);
		read >> dat;
		strcat(rotb5,dat);
		read >> dat;		//-------------------- REFLECTORS -----------------------//
		strcat(refb,dat);
		read >> dat;
		strcat(refc,dat);
		read >> dat;
		strcat(refbb,dat);
		read >> dat;
		strcat(refcc,dat);
		read.close();
	}
	else {
		cls
		cout << "Error! Rotor Files Missing!\n";
		system("pause");
		return -1;
	}
	return 0;
}
void rotor::setup() {
	this->get_rotors();
	cls
	cout << "Select Rotor Setup: ";
	cout << "\n1.	1	2	3";
	cout << "\n\n2.	1	3	2";
	cout << "\n\n3.	3	1	2";
	cout << "\n\n4.	3	2	1";
	cout << "\n\n5.	2	3	1";
	cout << "\n\n6.	2	1	3";
	cout << "\n\n7.	4	5";
	cout << "\n\n8.	5	4" << endl;
	cout << "\nYour Choice: ";
	cin >> roch;
	cls
	cout << "Select Reflector: ";
	cout << "\n\n1. B";
	cout << "\n\n2. C";
	cout << "\n\n3. B Thin";
	cout << "\n\n4. C Thin" << endl;
	cout << "\nYour Choice: ";
	cin >> rech;
	cls
	int amove[2], bmove[3];
	if(roch > 6){
		cout << "Enter start positions (4->5): ";
		cin >> amove[0];
		cin >> amove[1];
		for(int i=0; i<amove[0]; i++){
			tempa = rot4[0];
			for(int i=0; i<26; i++) {
				rot4[i] = rot4[i+1];
			}
			rot4[25] = tempa; 
		}
		for(int i=0; i<amove[1]; i++){
			tempa = rot5[0];
			for(int i=0; i<26; i++) {
				rot5[i] = rot5[i+1];
			}
			rot5[25] = tempa; 
		}
	}
	if(roch <= 6){ 
		cout << "Enter start positions (1->2->3): ";
		cin >> bmove[0];
		cin >> bmove[1];
		cin >> bmove[2];
		for(int i=0; i<bmove[0]; i++){
			tempa = rot1[0];
			for(int i=0; i<26; i++) {
				rot1[i] = rot1[i+1];
			}
			rot1[25] = tempa; 
		}
		for(int i=0; i<bmove[1]; i++){
			tempa = rot2[0];
			for(int i=0; i<26; i++) {
				rot2[i] = rot2[i+1];
			}
			rot2[25] = tempa; 
		}
		for(int i=0; i<bmove[2]; i++){
			tempa = rot3[0];
			for(int i=0; i<26; i++) {
				rot3[i] = rot3[i+1];
			}
			rot3[25] = tempa; 
		}
	}
	for(int i=0; i<26; i++) {
				crot1[i] = rot1[i];
				crot2[i] = rot2[i];
				crot3[i] = rot3[i];
				crot4[i] = rot4[i];
				crot5[i] = rot5[i];
				crotb1[i] = rotb1[i];
				crotb2[i] = rotb2[i];
				crotb3[i] = rotb3[i];
				crotb4[i] = rotb4[i];
				crotb5[i] = rotb5[i];
			}
	cls
	char choice;
	cout << "Do you want to add a plugboard conversion? (y/n): ";
	cin >> choice;
	if(choice == 'y' || choice == 'Y') {
		cls
		cout << "Enter from A through Z: ";
		for(int i=0; i<26; i++) {
			cin >> plugboard[i];
			if(plugboard[i] > 90) {
					plugboard[i] = char(int(plugboard[i]) - 32);
				}
		}
	}
}
char rotor::move_rotora(char orig, char rota[], char rotb[], char rotc[], char ref[], char rotai[], char rotbi[], char rotci[], char notch[]) {
			/////////////////////------------------------notch calculations----------------------------//////////////
	if(rotc[0] == notch[0]){
		tempa = rotb[0];
		for(int i=0; i<26; i++) {
			rotb[i] = rotb[i+1];
		}
		rotb[25] = tempa;
		for(int i=0; i<26; i++) {
			for(int j=0; j<26;j++) {
				if(standard[i] == rotb[j]) {
					rotbi[i] = standard[j];
					break;
				}
			}
		}
	}
	if(rotb[0] == notch[1]){
		tempa = rota[0];
		for(int i=0; i<26; i++) {
			rota[i] = rota[i+1];
		}
		rota[25] = tempa;
		for(int i=0; i<26; i++) {
			for(int j=0; j<26;j++) {
				if(standard[i] == rota[j]) {
					rotai[i] = standard[j];
					break;
				}
			}
		}
	}
	/////////////----------------------------standard iterations---------------------------------/////////////////////
	tempa = rotc[0];
	for(int i=0; i<26; i++) {
		rotc[i] = rotc[i+1];
	}
	rotc[25] = tempa; 
	//////////////--------------------------------inverse finding--------------------------///////////////////
	for(int i=0; i<26; i++) {
		for(int j=0; j<26;j++) {
			if(standard[i] == rotc[j]) {
				rotci[i] = standard[j];
				break;
			}
		}
	}
	for(int i=0; i<26; i++) {
		for(int j=0; j<26;j++) {
			if(standard[i] == rotb[j]) {
				rotbi[i] = standard[j];
				break;
			}
		}
	}
	for(int i=0; i<26; i++) {
		for(int j=0; j<26;j++) {
			if(standard[i] == rota[j]) {
				rotai[i] = standard[j];
				break;
			}
		}
	}
	int orval = int(orig);
	orval -= 65;
	orig = rotc[orval];
	orval = int(orig);
	orval -= 65;
	orig = rotb[orval];
	orval = int(orig);
	orval -= 65;
	orig = rota[orval];
	orval = int(orig);
	orval -= 65;
	orig = ref[orval];
	orval = int(orig);
	orval -= 65;
	orig = rotai[orval];
	orval = int(orig);
	orval -= 65;
	orig = rotbi[orval];
	orval = int(orig);
	orval -= 65;
	orig = rotci[orval];
}
char rotor::move_rotorb(char orig, char rota[], char rotb[], char ref[], char rotai[], char rotbi[], char notch[]) {
	if(rotb[0] == notch[0]){
	tempa = rota[0];
		for(int i=0; i<26; i++) {
			rota[i] = rota[i+1];
		}
		rota[25] = tempa;
		for(int i=0; i<26; i++) {
			for(int j=0; j<26;j++) {
				if(standard[i] == rota[j]) {
					rotai[i] = standard[j];
					break;
				}
			}
		}
	}
	/////////////----------------------------standard iterations---------------------------------/////////////////////
	tempa = rotb[0];
	for(int i=0; i<26; i++) {
		rotb[i] = rotb[i+1];
	}
	rotb[25] = tempa; 
	//////////////--------------------------------inverse finding--------------------------///////////////////
	for(int i=0; i<26; i++) {
		for(int j=0; j<26;j++) {
			if(standard[i] == rotb[j]) {
				rotbi[i] = standard[j];
				break;
			}
		}
	}
	for(int i=0; i<26; i++) {
		for(int j=0; j<26;j++) {
			if(standard[i] == rota[j]) {
				rotai[i] = standard[j];
				break;
			}
		}
	}
	int orval = int(orig);
	orval -= 65;
	orig = rotb[orval];
	orval = int(orig);
	orval -= 65;
	orig = rota[orval];
	orval = int(orig);
	orval -= 65;
	orig = ref[orval];
	orval = int(orig);
	orval -= 65;
	orig = rotai[orval];
	orval = int(orig);
	orval -= 65;
	orig = rotbi[orval];
}
