// basic file operations
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int CountUniqueCharacters(string inputString) {
  int uniqueness = 0;

  for (int i = 0; i < inputString.size(); i++) {
    bool appears = false;
    for (int j = 0; j < i; j++) {
      if (inputString[j] == inputString[i]) {
        appears = true;
        break;
      }
    }

    if (!appears) {
      uniqueness++;
    }
  }

  return uniqueness;
}

// this function doesn't work yet
bool FindInLine(string A, string B) {
  return false;
}

int main() {

  double progress = .0, prevprogress = .0;
  int inputCounter = 0;
  int outputCounter = 0;
  int linesize = 0;
  string lineFromFile[6];
  string lineend;

  //this works better
  ifstream myInput;
  myInput.open("data2.txt");
  cout << "\n\n\nopen input \n";

  ofstream myOutput; // output file
  myOutput.open("output.php");
  cout << "open Output\n";
  //the beggining
  myOutput << "<?php\n$stock=new array ();\n";

  while (!myInput.eof()) {
    getline(myInput, lineFromFile[0]);
    getline(myInput, lineFromFile[1]);
    getline(myInput, lineFromFile[2]);
    getline(myInput, lineFromFile[3]);
    getline(myInput, lineFromFile[4]);
    // sometimes it has an extra attribute: piercing slashing bludgeoning ac
    if (lineFromFile[4] == "Piercing" || lineFromFile[4] == "Slashing" || lineFromFile[4] == "Bludgeoning" || (lineFromFile[4][0] == 'A' && lineFromFile[4][1] == 'A')) {
      getline(myInput, lineFromFile[5]);
      inputCounter += 6;
      myOutput << "$stock[] = new array ('name'=>'" << lineFromFile[0] << "','type'=>'" << lineFromFile[1] << "','cost'=>'" << lineFromFile[2] << "','weight'=>'" << lineFromFile[3] << "','description'=>'" << lineFromFile[4] << "','notes'=>'" << lineFromFile[5] << "');" << endl;
      cout << "+ one " << endl;
    } else {
      myOutput << "$stock[] = new array ('name'=>'" << lineFromFile[0] << "','type'=>'" << lineFromFile[1] << "','cost'=>'" << lineFromFile[2] << "','weight'=>'" << lineFromFile[3] << "','description'=>'','notes'=>'" << lineFromFile[4] << "');" << endl;
      inputCounter += 5;
    }

    //$stock[] = new array ('name'=>,'type'=>, 'price'=> ,'weigth'=>, 'category'=> );
    myOutput << "$stock[] = new array ('name'=>'" << lineFromFile[0] << "','type'=>,'" << lineFromFile[1] << "','cost'=>,'" << lineFromFile[2] << "','weight'=>,'" << lineFromFile[3] << "','notes'=>,'" << lineFromFile[4] << "');" << endl;
    outputCounter++;

    prevprogress = progress;
    progress = double(inputCounter) / 1100.0;
    if (prevprogress != progress)
      cout << (floor(progress * 1000)) / 10 << " %\n";
  }

  /*  double progress=.0, prevprogress=.0;
    int inputCounter=0;
    int outputCounter=0;
    int linesize=0;
    string lineFromFile, prev1, prev2;
    string lineend;*/
  cout << "vardump:\n";
  cout << "progress" << " : " << progress << endl;
  cout << "prevprogress" << " : " << prevprogress << endl;
  cout << "inputCounter" << " : " << inputCounter << endl;
  cout << "outputCounter" << " : " << outputCounter << endl;
  cout << "linesize" << " : " << linesize << endl;
  for (int i = 0; i < 5; i++) {
    /* code */
    cout << "lineFromFile" << " : " << lineFromFile[i] << endl;
  }

  cout << "lineend" << " : " << lineend << endl;

  myInput.close();
  cout << "close input\n";
  myOutput.close();
  cout << "closeOut\n";

  return 0;
}
