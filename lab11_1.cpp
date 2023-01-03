#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0},stu_count=1; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	char grade;
	do{
		cout << "Student [" << stu_count << "]: ";
		cin >> grade;
		if(grade =='A'){
			count[0]++;
			stu_count++;
		}else if(grade =='B'){
			count[1]++;
			stu_count++;
		}else if(grade =='C'){
			count[2]++;
			stu_count++;
		}else if(grade =='D'){
			count[3]++;
			stu_count++;
		}else if(grade =='F'){
			count[4]++;
			stu_count++;
		}else if(grade =='0'){
			break;
		}
		else{ // grade is wrong input
			cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	
	cout << "In total " << stu_count-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	
	return 0;
}
