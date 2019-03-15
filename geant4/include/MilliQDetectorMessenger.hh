//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// $Id: MilliQDetectorMessenger.hh 77486 2013-11-25 10:14:16Z gcosmo $
//
/// \file optical/MilliQ/include/MilliQDetectorMessenger.hh
/// \brief Definition of the MilliQDetectorMessenger class
//
//
#ifndef MilliQDetectorMessenger_h
#define MilliQDetectorMessenger_h 1

#include "G4UImessenger.hh"
#include "globals.hh"

class MilliQDetectorConstruction;
class G4UIdirectory;
class G4UIcmdWithADoubleAndUnit;
class G4UIcmdWith3VectorAndUnit;
class G4UIcmdWithAnInteger;
class G4UIcommand;
class G4UIcmdWithABool;
class G4UIcmdWithADouble;

class MilliQDetectorMessenger: public G4UImessenger
{
public:

  MilliQDetectorMessenger(MilliQDetectorConstruction*);
  virtual ~MilliQDetectorMessenger();
 
  virtual void SetNewValue(G4UIcommand*, G4String);
 
private:

  MilliQDetectorConstruction*     fMilliQDetector;
  G4UIdirectory*               fDetectorDir;
  G4UIdirectory*               fVolumesDir;
  G4UIcmdWithABool*            fMilliQCmd;
  G4UIcommand*                 fDefaultsCmd;
  G4UIcmdWithADouble*          fMainScintYield;
  //    G4UIcmdWithADoubleAndUnit* fStepSizeCmd;
  //    G4UIcmdWithADoubleAndUnit* fMagFieldCmd;
};

#endif
