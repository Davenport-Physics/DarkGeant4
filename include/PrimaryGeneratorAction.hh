/*
 * PrimaryGeneratorAction.hh
 * 
 * Copyright 2016 Emma Davenport <Davenport.physics@gmail.com>
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


#ifndef PRIMARYGENERATORACTION_H
#define PRIMARYGENERATORACTION_H

#include <vector>

// Geant4 Headers
#include "G4Event.hh"
#include "G4ParticleGun.hh"
#include "G4ThreeVector.hh"
#include "G4ParticleDefinition.hh"
#include "G4GeneralParticleSource.hh"
#include "G4VUserPrimaryGeneratorAction.hh"

// User Headers
#include "SteppingAction.hh"
#include "Utilities.hh"
#include "DetectorComponent.hh"
#include "DetectorComponentBox.hh"

using std::vector;

class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction {
	
	/*
	 * 
	 * Class member variables
	 * 
	 * */
	
	private:
	
		int PresentIndex;
		int NumberOfEvents;
		SteppingAction *Stepping;
		vector<FourVector> *FourVectors;
		
		G4ParticleTable *ParticleTable;
		G4ParticleGun *ParticleGun;
		
		DetectorComponent *World;
	
	/*
	 * 
	 * Class member functions
	 * 
	 * */
	 
	public:
	
		PrimaryGeneratorAction(vector<FourVector> *FourVectors,
                               string DarkGeantOutputPath,
                               int NumberOfEvents,
                               DetectorComponent *World);
		~PrimaryGeneratorAction();
		
		void GeneratePrimaries(G4Event *event);
		SteppingAction *GetSteppingAction();
	
	private:
	
		G4ParticleDefinition *GetParticleDefinition(FourVector vec);
};

#endif

