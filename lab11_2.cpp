#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	string text;
	dest << "-------------------- BOOM ---------------------";
	while(getline(source,text)){
		
		dest << "\n" << text;
	}
	dest << "\n-------------------- HA!! ---------------------"; 

    source.close();
    dest.close();
	return 0;
}
