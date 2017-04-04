/*
 * PhysicsList.hh
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

#ifndef PHYSICSLIST_H
#define PHYSICSLIST_H

#include "G4VUserPhysicsList.hh"

struct Physics_Processes {
	
	
	// Photon processes
	bool GammaConversion;
	bool PhotoElectricEffect;
	bool CompotonScattering;
	bool RayleighScattering;
	bool GammaConversionToMuons;
	
	//Electron Positron processes
	bool eIonisation;
	bool eBremsstrahlung;
	bool ePairProduction;
	bool eMultipleScattering;
	bool eplusAnnihilation;
	
	bool AnnihiToMuPair;
	bool eeToHadrons;
	
	//Muon processes
	bool MuIonisation;
	bool MuBremsstrahlung;
	bool MuPairProduction;
	bool MuMultipleScattering;
	
	// Hadron ion processes
	bool hIonisation;
	bool ionIonisation;
	bool hhIonisation;
	bool mplIonisation;
	bool hMultipleScattering;
	bool gBremsstrahlung;
	bool hPairProduction;
	
	//Coulomb scattering processes
	//Not really sure what's up here?
	bool CoulombScattering;
	bool ScreenedNuclearRecoil;
	
	//Polarized electron and gamma beams
	bool PolarizedCompton;
	bool PolarizedGammaConversion;
	bool PolarizedPhotoElectricEffect;
	bool ePolarizedBremsstrahlung;
	bool ePolarizedIonisation;
	bool eplusPolarizedAnnihilation;
	
	//X-rays and optical protons production by charged particles
	bool SynchrotronRadiation;
	bool TransitionRadiation;
	bool Cerenkov;
	bool Scintillation;
	
	//TODO not done
};


class PhysicsList : public G4VUserPhysicsList {
	
	public:
	
		PhysicsList();
		~PhysicsList();
		
		void ConstructParticle();
		void ConstructProcess();
	
	
};

#endif
