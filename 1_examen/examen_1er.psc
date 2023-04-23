Proceso examen_1er
	Definir  evaluacionAnual Como Real;
	Definir inaceptable, aceptable, meritorio Como Real;
	// Captura de la evaluacionAnual
	Escribir "Por favor ingrese la evaluacion del empleado: ";
	Escribir "1. 0.0";
	Escribir "2. 0.4";
	Escribir "3. 0.6";
	Leer evaluacionAnual;
	
	//Calculo del pago del Empleado
	inaceptable <- 2400 * 0.0;
	aceptable <- 2400 * 0.4;
	meritorio <- 2400 * 0.6;
	
		
	Segun evaluacionAnual Hacer
		1:
			Escribir "La calificacion del empleado es Inaceptable y el beneficio de desempeno es ", inaceptable;
		2:
			Escribir "La calificacion del empleado es Aceptable y el beneficio de desempeno es ", aceptable;
		3:
			Escribir "La Calificacion del empleado es Meritorio y su beneficio es ", meritorio;
		De Otro Modo:
			Escribir "Escoja una opcion valida";
	FinSegun
FinProceso
