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
    int n, nAB, nAC, nBC;
    fin >> n >> nAB >> nBC >> nAC;
    int prov = min(min(nAB, nBC), nAC) / 2;
    vector <int> sp = {0, 0, 0, 0, 0, 0};
    sp[0] = prov;
    sp[2] = prov;
    sp[4] = prov;
    nAB -= prov * 2; 
    nBC -= prov * 2; 
    nAC -= prov * 2;
    n -= nAB + nBC + nAC;
    n -= prov * 3;
    sp[1] = nAB; 
    sp[3] = nBC; 
    sp[5] = nAC;

    if (nAB == 0 && nBC == 0 && nAC == 0 && n == 0) {
        fout << "YES" << endl;
        for (auto now : sp)
            fout << now << " ";
    }else{
        fout << "NO";
    }
    return 0;
}