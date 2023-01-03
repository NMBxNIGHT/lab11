//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
    ifstream score("score.txt");
 //   score.open("C:user\\thiranat_kakanmee\\Desktop\\Com Pro\\lab11\\score.txt");
    int num=0;
    double mean=0,sd=0,s2num;
    string data; 
   while(getline(score,data)){
        num++;
        s2num=atof(data.c_str());
        mean = mean+ s2num;
        sd= sd+pow(s2num,2);
    }
    score.close();
    cout << "Number of data = " << num << endl;
    cout << setprecision(3);
    mean = mean/num;
    cout << "Mean = "<< mean << endl;
    sd =sqrt(sd/num-pow(mean,2));
    cout << "Standard deviation = " <<sd;
    return 0;
    
}
