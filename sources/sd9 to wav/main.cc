//Tested on IIDX 27 Heroic Verse and IIDX26 Rootage
//wz18207
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char* argv[]){
	unsigned int s;
	char* b;
	if(argc==1||argc>3){
		printf("use:%s*.sd9[*.wav]\n",argv[0]);
		return -1;
	}
	std::cout<<"converting...";
	string sd9=argv[1];
	string wav;
	if(argc==2){
		wav=sd9+".wav";
	}
	ifstream fp(sd9.c_str(),ios::binary);
	fp.seekg(0, ios::end);
	s=(int)fp.tellg()-0x20;
	fp.seekg(0x20, ios::beg);
	b=new char[s];
	fp.read(b,s);
	ofstream op(wav.c_str(), ios::binary);
	op.write(b,s);
	std::cout << " done!\n"<<std::endl;
	return 0;
}
