#Datasheets for AMK -> Electrical - All > HT07 > Documentation > AMK Datasheets

	-amk_kit.pdf 			defines certain variables
	-sercos_parameters.pdf 		defines all parameters output from CAN


#Use FoxGlove Studio to read .mcat files


---IMPORTANT PARAMETERS---

Motor Torque:

PARAMETER: 	drivetrain_torque_telem_data
DESCRIPTION: 	output feedback value (measured, not requested)
UNITS:		%Mn*
Min. VALUE:	-3000%Mn
Max. VALUE:	3000%Mn

NOTES:		for 2024 comp data, assume 300 is simply max torque (21Nm).


*Mn is 2.1 according to amk_kit.pdf

