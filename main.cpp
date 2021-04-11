#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * Sorts input file (arg 1) in alphabetical order
 * input is one word per line.
 */
int main(int argc, char** argv)
{
	//
	// open input file
	//
	fstream input_file;
	input_file.open(argv[1], ios::in);
	if(!input_file.is_open())
	{
		std::cout << "can't open " << argv[1] << std::endl;
		return -1;
	}

	//
	// read input file
	//
	string word;
	vector<string> words;
	while(getline(input_file, word))
	{
		words.push_back(word);
	}
	//
	// sort
	//
	sort(words.begin(),words.end());

	//
	// print output
	//
	for(auto word : words)
	{
		std::cout << word << std::endl;
	}
}
