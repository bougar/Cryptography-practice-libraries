#include <iostream>
#include "Crypto.hpp"

class Cesar : public Crypto {
	private:
		int shift;
	public:
		string encode(const string);
		string decode(const string);
		Cesar(int shift) {
			this->shift = shift;
		};
};

string Cesar::encode(const string str){
	string aux; 
	for ( int i=0; i < str.length(); i++){
		char auxChar = (char) str[i];
		if ( (auxChar > 64 && auxChar < 91) || ( auxChar >  96 && auxChar < 123) )
			auxChar += Cesar::shift % 26;
		aux += auxChar;
	}
	return aux;
}

string Cesar::decode(const string str){
	string aux; 
	for ( int i=0; i < str.length(); i++){
		char auxChar = (char) str[i];
		if ( (auxChar > 64 && auxChar < 91) || ( auxChar >  96 && auxChar < 123) )
			auxChar -= Cesar::shift % 26;
		aux += auxChar;
	}
	return aux;
}

int main(void){}
