#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	int n;
	fin >> n;
	vector <int> sp = {1, 2, 3};
	for (int i = 4; i < 101; i++){
	    int maxi = 0;
	    for (int j = 0; j < sp.size(); j++){
	        if (sp[j] * sp[sp.size() - j - 1] > maxi){
	            maxi = sp[j] * sp[sp.size() - j - 1];
	        }
	    }
	    sp.push_back(maxi);
	}
	fout << sp[n - 1];
    return 0;
}