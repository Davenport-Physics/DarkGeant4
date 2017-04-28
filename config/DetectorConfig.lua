--[[

	* Detector_Name
	
		"Anything you want" (Default value of "Detector")
		
	* Number_of_Detector_Components
	
		A *Integer* greater than 0
		
			default = nil. Will halt execution of program if not 
			defined.

]]--
DetectorConfig = { Detector_Name = "Detector",
                  Number_of_Detector_Components = 0 }


-- **** Please note that units of length are in metres!                  

--[[

	* Component_Name
	
		(Default value of DectorComponent_x)

	* Material
	
		"Liquid Argon"
		"Air"

	* Volume_Type
	
		"Cylinder"
		
			Inner_Radius (Default value of 0.0)
			Outer_Radius (No Default Value)
			Half_Length (No Default Value)
			Start_Angle (Default Value of 0.0)
			Delta_Angle   (Default Value of 360.)
		
		"Box"
		
			half_X (No Default Value) (Width) -> Usually
			half_Y (No Default Value) (Height)-> Usually
			half_Z (No Default Value) (Length)-> Usually

		"Cone"

			Inner_Radius_At_Bottom (Default value of 0.0)
			Outside_Radius_At_Bottom (No Default Value)
			Inner_Radius_At_Top (Default value of 0.0)
			Outside_Radius_At_Top (No Default Value)
			Half_Length (No Default Value)
			Start_Angle (Default value of 0.0)
			Delta_Angle (Default value of 360.)

		"Ellipsoid"

			X_Semi_Axis (No Default Value)
			Y_Semi_Axis (No Default Value)
			Z_Semi_Axis (No Default Value)
			Z_Bottom (No Default Value)
			Z_Top (No Default Value)

		"Elliptical Cone"

			X_Semi_Axis (No Default Value)
			Y_Semi_Axis (No Default Value)
			Height (No Default Value)
			Z_Top (No Default Value)
		
		"Elliptical Tube"

			X_Half_Length (No Default Value)
			Y_Half_Length (No Default Value)
			Z_Half_Length (No Default Value)			
		
		"Hyperbolic Tube"

			Inner_Radius (No Default Value)
			Outer_Radius (No Default Value)
			Inner_Radius_Angle (No Default Value)
			Outer_Radius_Angle (No Default Value)
			Z_Half_Length (No Default Value)

		"Parallelepiped"

			X_Half_Length (No Default Value)
			Y_Half_Length (No Default Value) 
			Z_Half_Length (No Default Value) 
			Angle_Of_XZ_Faces (No Default Value)
			Polar_Angle_Of_XY_Faces (No Default Value)
			Azimuthal_Angle_Of_XY_Faces (No Default Value)

		"Solid Sphere"

			Radius (No Default Value)
		
		"Spherical Shell"
		
			Inner_Radius (Default value of 0.0)
			Outer_Radius (No Default Value)
			Phi_Start (Default value of 0.0)
			Delta_Phi (Default value of 360.)
			Theta_Start (Default value of 0.0)
			Delta_Theta (Default value of 360.)

		"Torus"

			Inner_Radius (Default value of 0.0)
			Outer_Radius (No Default Value)
			Sweeping_Radius (No Default Value)
			Phi_Start (Default value of 0.0) 
			Delta_Phi (Default value of 360.)

		"Trapezoid"

			X_Half_Length_At_Bottom (No Default Value)
			X_Half_Length_At_Top (No Default Value)
			Y_Half_Length_At_Bottom (No Default Value)
			Y_Half_Length_At_Top (No Default Value)
			Z_Half_Length (No Default Value)

		"Twisted Box"

			Twisting_Angle (No Default Value)
			X_Half_Length (No Default Value)
			Y_Half_Length (No Default Value)
			Z_Half_Length (No Default Value)

		"ZTwistedTrapezoid"

			X_Half_Length_At_Bottom (No Default Value)
			X_Half_Length_At_Top (No Default Value)
			Y_Half_Length_At_Bottom (No Default Value)
			Y_Half_Length_At_Top (No Default Value)
			Z_Half_Length (No Default Value)
			Twisting_Angle (Default value of 0.0)
			
	* X_Rotation
	
		Rotates the object about the X Axis by <number> degrees
	
		Default value of 0.0
		
	* Y_Rotation
	
		Rotates the object about the Y Axis next, by <number> degrees
	
		Default value of 0.0
	
	* Z_Rotation
	
		Rotates the object about the Z Axis next, by <number> degrees
	
		Default value of 0.0
		
	* Magnetic_Field
		
		Sets up a uniform magnetic field. Must be specified as a vector in tesla. Default is zero field.
	
	* Inside
	
		"World"
		"DetectorComponent_x"
		
			default = nil. Will halt execution of program if not 
			defined.


]]--

World = { Material = "G4_AIR",
          Volume_Type = "Box",
          half_X = 5.0,
          half_Y = 5.0,
          half_Z = 5.0,
          Inside = "None",
          Position = {0, 0, 0}, 
	  Magnetic_Field = {0, 0, 0},
	  Electric_Field = {100, 0, 0}}

--[[DetectorComponent_1 = { Material = "G4_H",
          Volume_Type = "Cone",
          Inner_Radius_At_Bottom = 0,
	  Outside_Radius_At_Bottom = 5,
	  Inner_Radius_At_Top = 0,
	  Outside_Radius_At_Top = 5,
	  Half_Length = 5,
	  Start_Angle = 0,
	  Delta_Angle = 360,
	  Inside = "World",
	  Position = {0,5,10},
          Magnetic_Field = {0.3,0,0} }--]]


