#include<iostream>
#include<fstream>
using namespace std;
namespace counter{

void counter(int rows)

{ifstream in("data1.csv");
                //int rows=0;
                        string buffer;
            while(getline(in,buffer,'\n'))
            {  rows ++;}
}
}
