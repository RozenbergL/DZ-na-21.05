#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <stdlib.h>


using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	int a;
	char ch;
	fin >> ch >> a;
    string s;
    vector <int> sp;
    while (a > 0) {
        int q = a / 3;
        int r = a % 3;
        if (r <= 1) {
            s = (char)(r + '0') + s;
            char kkk = (char)(r + '0');
            int n = (int)kkk - 48;
            sp.push_back(n);
            a = q;
        }
        else {
            r = 3 - r;
            s = '-' + ((char)(r + '0') + s);
            char kkk = (char)(r + '0');
            int n = (int)kkk - 48;
            sp.push_back(n * (-1));
            a = q + 1;
        }
    }
    vector <int> ans1;
    vector <int> ans2;
    for (int i = 0; i < sp.size(); i++){
        if (sp[i] == 1){
            ans1.push_back(pow(3, i));
        }
        if (sp[i] == -1){
            ans2.push_back(pow(3, i));
        }
    }
    sort(ans1.begin(), ans1.end());
    sort(ans2.begin(), ans2.end());
    if (ch == 'L'){
        fout << "L:";
        for (int i = 0; i < ans2.size(); i++){
            fout << ans2[i] << " ";
        }
        fout << endl;
        fout << "R:";
        for (int i = 0; i < ans1.size(); i++){
            fout << ans1[i] << " ";
        }
    }else{
        fout << "L:";
        for (int i = 0; i < ans1.size(); i++){
            fout << ans1[i] << " ";
        }
        fout << endl;
        fout << "R:";
        for (int i = 0; i < ans2.size(); i++){
            fout << ans2[i] << " ";
        }       
    }
    return 0;
}