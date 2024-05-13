#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int);//constructor
	~angka();//destruction
	void cetakData();
	void isiData();
};
//definisi member funcot
angka::angka(int i) {//constructor
	panjang = i;
	arr = new int[i];
	isiData();
}