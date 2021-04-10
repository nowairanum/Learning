#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
#include"fasttransforms.h"
#include"specialfunctions.h"

using namespace alglib;
using namespace std;


int main()
{
    string abc;
    ifstream myFile;
    ofstream MyOutFile;
    myFile.open("..\\data\\in_td_data_sample1.csv");
    while (myFile.good())
    {
        string temp;
        getline(myFile, temp, '\n');
        abc = temp;
    }
    myFile.close();
    cout << endl;
    
    complex_1d_array  cmplxNum = abc.c_str();
    fftc1d(cmplxNum);

    //cout<<endl<<"FFTC1D OUTPUT: "<< cmplxNum.tostring(3).c_str(); // EXPECTED: [4i,0,0,0]
    MyOutFile.open("..\\data\\fftc1d.csv");

    MyOutFile << cmplxNum.tostring(3).c_str();
    MyOutFile.close();
    return 0;
}