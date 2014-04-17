/*
//  mainAminoAcid.cpp
// Created by Julia Reiner on 2/14/14.
//
// The driver of AminoAcid
*/

#include "AminoAcid.h" 
#include <iostream> //inputs and outputs
#include <vector> //vector for protein
#include <cmath>
#include <fstream> //controlled file processing
#include <string> // strings

using namespace std;

int main(int argc, const char * argv[])
{

  // declare variables
  double sum = 0; 
  double boltzconstant = 0.0019872041; 
  double temp = 0; 
  double probability = 0; 

  //import residues file`
  vector<AminoAcid*> protein;
  ifstream inFile;
  inFile.open("mdm2_residues.txt");
  string line;
  while(inFile >> line) {
    protein.push_back(new AminoAcid(line));
  }
  inFile.close();

  //prompt user for temperature
  cout << "What is the temperature in Kelvins?";
    cin >> temp; 

  //loop through the Amino Acids 
  for (int index=0; index<protein.size(); index++) {
    sum += protein[index]->getPropensity(); 
    cout << index+1 << ")" << '\t' << protein.at(index)-> getAminoAcidName() << '\t'<< protein.at(index)->getPropensity() << endl;
  }
  probability = exp (-sum/(boltzconstant*temp)); 
  cout << probability; 
  
  return 0;
}

