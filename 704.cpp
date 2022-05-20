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
	int n;
	fin >> n;
	int m;
	fin >> m;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	for (int i = 0; i < m; i++){
	    int a, b;
	    fin >> a >> b;
	    if (a <= n / 2 && b <= n / 2){
	        count1++;
	    }
	    if (a > n / 2 && b <= n / 2){
	        count2++;
	    }
	    if (a <= n / 2 && b > n / 2){
	        count3++;
	    }
	    if (a > n / 2 && b > n / 2){
	        count4++;
	    }
	}
	if ((count1 != 0 && count4 != 0) || (count2 != 0 && count3 != 0)){
	    fout << "NO";
	}else{
	    fout << "YES";
	}
    return 0;
}