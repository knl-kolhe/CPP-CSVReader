//============================================================================
// Name        : CPP-CSVReader.cpp
// Author      : Kunal Kolhe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include "Reader.cpp"
using namespace std;


int main() {
	Reader<float> readObj;
	vector<pair<string, vector<float>>> result = readObj.read_csv("./data/data.csv");

	for(int i=0;i<result.size();i++){
		cout<<result.at(i).first<<endl;
		for(int j=0;j<result.at(i).second.size();j++){
			cout<<result.at(i).second.at(j)<<endl;
		}
		cout<<"Next Column"<<endl;
	}
	return 0;
}
