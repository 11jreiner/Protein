//
// AminoAcid.cpp
//
// Created by Julia Reiner on 2/14/14.
// Copyright (c) 2014 Julia Reiner. All rights reserved.
//

#include "AminoAcid.h"
#include<string>

//constructor

AminoAcid::AminoAcid(string name) {
  aminoAcidName = name;
  if (name.compare("ALA")==0) {
      propensity = 0.00;
}
  else if (name.compare("ARG")==0) {
	propensity = 0.21; 
      }

  else if (name.compare("ASN")==0) {
     propensity = 0.65;
   }
 
  else if (name.compare("ASP")==0) {
     propensity = 0.69;
   }
 
  else if (name.compare("CYS")==0) {
	propensity = 0.68;
   }
  else if (name.compare("GLU")==0) {
	propensity = 0.40; 
   }
  else if (name.compare("GLN")==0) {
    propensity = 0.39;   
   }
  else if (name.compare("GLY")==0) {
	propensity = 1.00; 
   }
  else if (name.compare("HIS")==0) {
	propensity = 0.61;
   }
  else if (name.compare("ILE")==0) {
	propensity = 0.41;
   }
  else if (name.compare("LEU")==0) {
	propensity = 0.21;
   }
  else if (name.compare("LYS")==0) {
	propensity = 0.26; 
   }
  else if (name.compare("MET")==0) {
	propensity = 0.24;
   }
  else if (name.compare("PHE")==0) {
	propensity = 0.54;
   }
  else if (name.compare("PRO")==0) {
	propensity = 3.16; 
   }
  else if (name.compare("SER")==0) {
	propensity = 0.50;
   }
  else if (name.compare("THR")==0) {
	propensity = 0.66;
   }
  else if (name.compare("TRP")==0) {
	propensity = 0.49;
   }
  else if (name.compare("TYR")==0) {
     propensity = 0.53;
   }
  else if (name.compare("VAL")==0) {
	propensity = 0.61;   
   }

   else {
     propensity = -1; 
   }
}


void AminoAcid::setAminoAcidName(string n) {
  aminoAcidName = n;
}

string AminoAcid::getAminoAcidName() {
  return aminoAcidName;
}

void AminoAcid::setPropensity(double num) {
  propensity = num;
}

double AminoAcid::getPropensity() {
  return propensity;
}
  

