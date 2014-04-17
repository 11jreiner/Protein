//
// AminoAcid.h
//
// Created by Julia Reiner on 2/14/14.
// AminoAcid class
//

#ifndef _AminoAcid_
#define _AminoAcid_ 

#include <iostream>
using namespace std;

class AminoAcid 
{

 private: 
  string aminoAcidName;
  double propensity;

 public:
  AminoAcid(string); //constructor
  void setAminoAcidName(string);
  string getAminoAcidName();
  void setPropensity(double);
  double getPropensity();
};

#endif
