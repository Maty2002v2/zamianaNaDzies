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
  		char* endptr;
  		ofstream fileOut;
  		string nazwa;
  		string liczba2;
  		int zamieniona, system;
  		
		hexNumber(string nazwaPliku) {
			this->nazwa = nazwaPliku;
		}
		
		void exchange();
		void zapis();
};

void hexNumber::exchange() {
	file.open(this->nazwa.c_str());
  
  		if(file.good())
     		while (!file.eof()) {
        		file>>system >> liczba2;
        			
        		zamieniona =  strtol(liczba2.c_str(), &endptr, system);
        			
        		switch(system) {
        			case 2:
        				cout<<"Liczba "<<liczba2<<" w systemie dwujkowym to "<<zamieniona<<" w sysyemie dziesietnym."<<endl;
        			 break;
        				case 8:
        				cout<<"Liczba "<<liczba2<<" w systemie osemkowym to "<<zamieniona<<" w sysyemie dziesietnym."<<endl;
        			 break;
        			case 10:
        				cout<<"Liczba "<<liczba2<<" nie zmiennie jest w systemie dziesietnym"<<endl;
        			 break;
        			case 16:
        				cout<<"Liczba "<<liczba2<<" w systemie szesnastkowym to "<<zamieniona<<" w sysyemie dziesietnym."<<endl;
        			break;
        			default:
						cout<<"cos poszlo nie tak"<<endl;
					 break;
					}
				}
		file.close();
};

void hexNumber::zapis() {
	
};

int main(int argc, char** argv) {
	hexNumber hex("C:\\od.txt");
	hex.exchange();
	return 0;
}
