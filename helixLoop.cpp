/*
//  helixLoop.cpp
// Created by Julia Reiner on 3/24/14.
//
// The driver of AminoAcid
// loop through protein to find where helix may be at 
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
  double loopSum = 0; 
  double loopProbability =0;  
  double p = 0.05;

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
    cout << index+1 << ")" << '\t' << protein.at(index)-> getAminoAcidName() << '\t'<< protein.at(index)->getPropensity() << '\t' << endl;
  }
  probability = exp (-sum/(boltzconstant*temp)); 
  cout << probability << endl; 

  for (int block_length = protein.size(); block_length >= 4; block_length--){
  for (int index = 0; index<protein.size()-block_length; index++){
    loopSum = 0; 
    for (int i = 0; i<block_length; i++){
  loopSum += protein[index+i]->getPropensity(); 
  // cout << index+i+1 << ")" << '\t' << protein.at(index+i)-> getAminoAcidName() << '\t'<< protein.at(index+i)->getPropensity() << endl;
  }
  loopProbability = exp (-loopSum/(boltzconstant*temp));
  if (loopProbability >= p){
    cout << index + 1 << '\t' << loopProbability << '\t' << block_length << endl;
  }
  }
  }
  return 0;  
}
