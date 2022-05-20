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
	for (int i = 0; i < n; i++){
	    int a, b;
	    fin >> a >> b;
	    int c, d;
	    fin >> c >> d;
	    int flag = 0;
	    while (b != 0){
	        if (b > a){
	            swap(a, b);
	        }
	        if (a == c && b == d){
	            flag = 1;
	        }
	        a = a - b;
	        if (a == c && b == d){
	            flag = 1;
	        }
	    }
	    if (flag == 1){
	        fout << "YES" << endl;
	    }else{
	        fout << "NO" << endl;;
	    }
	}
    return 0;
}