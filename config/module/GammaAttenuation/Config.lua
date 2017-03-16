--[[

Config
~~~~~~~~~~~~~~~~~~

	* Module_Name

	* PhysicsList

		1. "Default"
		2. "QGSP"
		3. "QGSP_BERT"
		4. "QGSP_BERT_EMV"
		5. "QGSP_BERT_HP"
		6. "QGSP_BERT_TRV"
		7. "QGSP_BIC"
		8. "QGSP_BIC_HP"
		9. "QGSP_INCLXX"
		10. "FTFP_BERT"
		
		For information regarding which appropriate list to use,
		please see the following link
		
		http://geant4.cern.ch/support/proc_mod_catalog/physics_lists/referencePL.shtml

]]--

ConfigTable = { Module_Name = "Default",
                PhysicsList = "Default"}
                
DarkGeantOutputFile = { Name = "Output.dat",
                        Location = "/home/hunter/projects/DarkGeant4/config/module/GammaAttenuation/Output.dat" }

