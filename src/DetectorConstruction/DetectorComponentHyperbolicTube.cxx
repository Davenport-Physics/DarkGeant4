/*
 * DetectorComponentHyperbolicTube.cxx
 * 
 * Copyright 2016 Hunter Sullivan <hunter.sullivan@mavs.uta.edu>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include "DetectorComponentHyperbolicTube.hh"

//Geant4 Headers
#include "G4SystemOfUnits.hh"
#include "G4Hype.hh"
#include "G4LogicalVolume.hh"
#include "G4UniformMagField.hh"
#include "G4FieldManager.hh"

using std::cout;

DetectorComponent_HyperbolicTube::DetectorComponent_HyperbolicTube(DetectorComponent_vars vars)
 : DetectorComponent(vars)
{
	
	this->InnerRadius      = vars.hyperbolic_tube->InnerRadius;
	this->OuterRadius      = vars.hyperbolic_tube->OuterRadius;
	this->InnerRadiusAngle = vars.hyperbolic_tube->InnerRadiusAngle;
	this->OuterRadiusAngle = vars.hyperbolic_tube->OuterRadiusAngle;
	this->zHalfLength      = vars.hyperbolic_tube->zHalfLength;
	
	delete vars.hyperbolic_tube;
}

DetectorComponent_HyperbolicTube::~DetectorComponent_HyperbolicTube() {
	
	
}


void DetectorComponent_HyperbolicTube::ConstructVolume() {
	
	G4Hype *VirtualVolume = new G4Hype(this->Name,
                                       this->InnerRadius * m,
                                       this->OuterRadius * m,
                                       this->InnerRadiusAngle * deg,
                                       this->OuterRadiusAngle * deg,
                                       this->zHalfLength * m);

	G4UniformMagField* magField =new G4UniformMagField(this->MagneticField);
        //G4Mag_UsualEqRhs* myEquation = new G4Mag_UsualEqRhs(magField);
        //G4MagIntegratorStepper* myStepper = new G4ClassicalRK4(myEquation);
       // G4ChordFinder* myChordFinder = new G4ChordFinder(magField,1.0e-5*mm,myStepper);
        G4FieldManager* fieldMgr = new G4FieldManager(magField);
	
	this->LogicalVolume = new G4LogicalVolume(VirtualVolume,
                 this->DetectorComponentMaterial->GetMaterialPointer(),
                 this->Name,
		 fieldMgr);

}

bool DetectorComponent_HyperbolicTube::WithinVolume(G4double x, G4double y, G4double z) {

	cout << "DetectorComponent_HyperbolicTube WithinVolume STUB\n";

	return true;
	
}

