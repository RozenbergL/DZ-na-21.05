#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	int b;
	fin >> b;
	if (b == 1 || b == 2 || b == 3 || b == 6){
	    fout << -1;
	}
	else if (b == 5){
	    fout << 1 << endl;
	    fout << 2 << endl;
	    fout << 0 << endl;
	    fout << 0 << endl;
	    fout << 2 << endl;
	}else{
	    vector <int> sp;
	    for (int i = 0; i < b; i++){
	        sp.push_back(0);
	    }
	    sp[0] = 2;
	    sp[1] = 1;
	    sp[b - 5] = 1;
	    sp[b - 1] = b - 4;
	    for (auto now : sp){
	        fout << now << endl;
	    }
	}
    return 0;
}