// basic file operations
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
  string myWord;
  double myNumber;
  int counter=0;
  ifstream ifile;
  ifile.open("list_of_stuff.txt");
  cout<<"open input\n";

  // check for error
    if (ifile.fail()){
      cerr<<"errrFuck\n";
      cerr<<"not opening\n";
      exit(1);
    }
  while(true){
    ifile>>myWord;
    counter++;
    cout<<myWord<<endl;

    if (counter == 6)
      break;
  }
  ifile.close();









  //this works better
  ifile.open("list_of_stuff.txt");
  cout<<"\n\n\nopen input again\n";

  string lineFromFile;

  while( !ifile.eof() )
  {
      getline( ifile, lineFromFile );
      //process the line
      cout<<lineFromFile<<endl;
  }
  cout<<"close input\n";
  ifile.close();












  ifile.open("numbers.txt");
  cout<<"open input\n";

  // check for error
    if (ifile.fail()){
      cerr<<"errrFuck\n";
      cerr<<"not opening\n";
      exit(1);
    }
    counter=0;
    while( !ifile.eof() )
    {

        getline( ifile, lineFromFile );
        //process the line

    }

  cout<<"close input\n";
  ifile.close();


















  ofstream ofile; // output file
  ofile.open ("output.txt");
  ofile << "output open\n";

  ofile << "output close\n";
  ofile.close();
  return 0;
}
