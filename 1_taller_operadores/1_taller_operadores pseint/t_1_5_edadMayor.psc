Proceso t_1_e_evaluacion
	definir edadUsuario Como Entero;
	// Captura de datos
	Escribir "Por favor ingrese su edad";
	Leer edadUsuario;
	
	// Condicional de valoracionUsuario
	Si edadUsuario > 18 Entonces
		Escribir "Usted es Mayor de Edad";
	sino 
		Escribir "Usted es Menor de Edad";
	FinSi
	
FinProceso
