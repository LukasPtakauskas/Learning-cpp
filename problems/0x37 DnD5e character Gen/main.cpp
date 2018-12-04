// basic file operations
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <random>
using namespace std;

struct character{
  string name;
  int class;
  int background;
  int race;
  int level,ac,mv,hpmax,hpcurrent,gold;
  int stats[6],mods[6];
}







int main() {

  double progress = .0, prevprogress = .0;
  int outputCounter = 0;
  string lineFromFile;

  //this works better
  ifstream myInput("data2.txt");
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
    if (lineFromFile[4] == "Piercing" || lineFromFile[4] == "Slashing" || lineFromFile[4] == "Bludgeoning" || (lineFromFile[4][0] == 'A' && lineFromFile[4][1] == 'C')) {
      getline(myInput, lineFromFile[5]);
      inputCounter += 6;
      myOutput << "$stock[] = new array ('name'=>'" << lineFromFile[0] << "','type'=>'" << lineFromFile[1] << "','cost'=>'" << lineFromFile[2] << "','weight'=>'" << lineFromFile[3] << "','description'=>'" << lineFromFile[4] << "','notes'=>'" << lineFromFile[5] << "');" << endl;
      cout << "+ one " << endl;
    } else {
      myOutput << "$stock[] = new array ('name'=>'" << lineFromFile[0] << "','type'=>'" << lineFromFile[1] << "','cost'=>'" << lineFromFile[2] << "','weight'=>'" << lineFromFile[3] << "','description'=>'','notes'=>'" << lineFromFile[4] << "');" << endl;
      inputCounter += 5;
    }

    //$stock[] = new array ('name'=>,'type'=>, 'price'=> ,'weigth'=>, 'category'=> );
      //myOutput << "$stock[] = new array ('name'=>'" << lineFromFile[0] << "','type'=>,'" << lineFromFile[1] << "','cost'=>,'" << lineFromFile[2] << "','weight'=>,'" << lineFromFile[3] << "','notes'=>,'" << lineFromFile[4] << "');" << endl;
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
