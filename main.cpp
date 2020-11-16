#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class hexNumber {
	public:
		
		ifstream file;
		ofstream fileOut;
  		char* endptr;
  		string nazwa;
  		string liczba2;
  		int zamieniona, system;
  		
		hexNumber(string nazwaPliku) {
			this->nazwa = nazwaPliku;
		}
		
		void exchange();
};

void hexNumber::exchange() {
	file.open(this->nazwa.c_str());
	fileOut.open("c:\\lol.txt");
  
  		if(file.good())
     		while (!file.eof()) {
        		file>>system >> liczba2;
        			
        		zamieniona =  strtol(liczba2.c_str(), &endptr, system);
        			
        		switch(system) {
        			case 2:
        				fileOut<<"Liczba "<<liczba2<<" w systemie dwujkowym to "<<zamieniona<<" w sysyemie dziesietnym."<<endl;
        			 break;
        				case 8:
        				fileOut<<"Liczba "<<liczba2<<" w systemie osemkowym to "<<zamieniona<<" w sysyemie dziesietnym."<<endl;
        			 break;
        			case 10:
        				fileOut<<"Liczba "<<liczba2<<" nie zmiennie jest w systemie dziesietnym"<<endl;
        			 break;
        			case 16:
        				fileOut<<"Liczba "<<liczba2<<" w systemie szesnastkowym to "<<zamieniona<<" w sysyemie dziesietnym."<<endl;
        			break;
        			default:
						fileOut<<"cos poszlo nie tak"<<endl;
					 break;
					}
				}
		file.close();
		fileOut.close();
};

void hexNumber::zapis() {
	
};

int main(int argc, char** argv) {
	hexNumber hex("C:\\od.txt");
	hex.exchange();
	return 0;
}
