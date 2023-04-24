Proceso t_1_e_evaluacion
	definir valoracionUsuario Como Entero;
	// Captura de datos
	Escribir "Por favor ingrese una valoracion del 1 al 10";
	Leer valoracionUsuario;
	
	// Condicional de valoracionUsuario
	Si valoracionUsuario >= 6 Entonces
		Escribir "Aprobaste el Examen";
	sino 
		Escribir "Reprobaste el examen";
	FinSi
	
FinProceso
