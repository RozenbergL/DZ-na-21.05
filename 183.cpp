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
	int k, p;
	fin >> k >> p;
	vector <long long> sp = {2, 4, 3};
	int count = 2;
	while (true){
	    for (int i = sp.size() - 1; i >= sp.size() - count; i--){
	        sp.push_back(sp[i] * 2);
	        sp.push_back(sp[i] + 1);
	    }
	    count = count * 2;
	    if (sp[sp.size() - 1] >= k){
	        break;
	    }
	}
	int answer = 0;
	for (int i = 0; i < sp.size(); i++){
	    if (sp[i] == k){
	        answer++;
	    }
	}
	fout << answer % p;
    return 0;
}