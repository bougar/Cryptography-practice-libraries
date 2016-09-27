using namespace std;
class Crypto {
	public:
		virtual string encode(string str) = 0;
		virtual string decode(string str) = 0;
};
