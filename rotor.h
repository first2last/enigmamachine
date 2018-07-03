#ifndef ROTOR_H
#define ROTOR_H
using namespace std;

class rotor
{
	public:
		char rot1[26], rot2[26], rot3[26], rot4[26], rot5[26];
		char rotb1[26], rotb2[26], rotb3[26], rotb4[26], rotb5[26];
		char refb[26], refc[26], refbb[26], refcc[26];
		char crot1[26], crot2[26], crot3[26], crot4[26], crot5[26];
		char crotb1[26], crotb2[26], crotb3[26], crotb4[26], crotb5[26];
		char plugboard[26];
		int roch, rech;	
		rotor(){
			int j=0;
			for(int i=65; i<91; i++) {
				plugboard[j] = char(i);
				j++;
			}
			this->setup();
		}
		void setup();
		char move_rotora(char orig, char rota[], char rotb[], char rotc[], char ref[], char rotai[], char rotbi[], char rotci[], char notch[]);
		char move_rotorb(char orig, char rota[], char rotb[], char ref[], char rotai[], char rotbi[], char notch[]);
		void show_rotors();
		int get_rotors();
		void reset_rotors(){
			for(int i=0; i<26; i++) {
				rot1[i] = crot1[i];
				rot2[i] = crot2[i];
				rot3[i] = crot3[i];
				rot4[i] = crot4[i];
				rot5[i] = crot5[i];
				rotb1[i] = crotb1[i];
				rotb2[i] = crotb2[i];
				rotb3[i] = crotb3[i];
				rotb4[i] = crotb4[i];
				rotb5[i] = crotb5[i];
			}
		}
};

#endif
