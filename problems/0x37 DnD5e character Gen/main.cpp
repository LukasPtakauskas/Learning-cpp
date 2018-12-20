// basic file operations
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <random>

using namespace std;








int main() {

  double progress = .0, prevprogress = .0;
  int outputCounter = 0;
  string input_file_name , output_file_name;
  string lineFromFile;

  cout << "what is the input file?  ";
  cin >> input_file_name;
  cout << "what is the output file? ";
  cin >> output_file_name;

  //this works better
  ifstream myInput ;
  myInput.open(input_file_name);
  cout << "\n\n\nopen input \n";

  ofstream myOutput ; // output file
  myOutput.open(output_file_name);
  cout << "open Output\n";
  //the beggining
  myOutput << "<?php\n$stock=new array ();\n";
  while (!myInput.eof()) {
    getline(myInput, lineFromFile);

  }



  myInput.close();
  cout << "close input\n";
  myOutput.close();
  cout << "closeOut\n";

  return 0;
}
