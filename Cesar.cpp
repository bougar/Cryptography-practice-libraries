#include <iostream>
#include "Crypto.hpp"
class Cesar : public Crypto {
	private:
		int disp = 3;
		static Crypto * pointer;
	public:
		void setDisplacement(int disp)
			{ this->disp = disp; }
		int getDisplacement()
			{ return disp; }
		static Crypto* getInstance(){
			if (pointer)
		        pointer = (Crypto *) new Cesar;
		    return pointer;
		}
	private:
		Cesar();
			
};

string Cesar::encode(string str){
	return NULL;
}

int main(void){}
