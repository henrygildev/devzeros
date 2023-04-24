Proceso t_1_f_numeros
	definir numero1, numero2 Como Real;
	
	escribir "Por favor ingrese el primer numero";
	Leer numero1;
	escribir "Por favor ingrese el segundo numero";
	leer numero2;
	
	// Verificacion
	Si numero1 = numero2 Entonces
		Escribir "Los numeros son iguales";
	SiNo
		si numero1 > numero2 Entonces
			Escribir "El numero1 es mayor";
			SiNo
			Escribir "El numero2 es mayor";
		FinSi
	FinSi
	
FinProceso
