Proceso t_1_11_impuestoSalario
	Definir salarioUsuario Como Real;
	
	// captura del salarioUsuario
	Escribir "Por favor ingrese su salario mensual";
	Leer salarioUsuario;
	
	// Verificacion del salarioUsuario
	Si salarioUsuario > 9999 Entonces
		Si salarioUsuario >= 10000 Y salarioUsuario < 20000 Entonces
			Escribir "Usted debe pagar impuestos del 5%";
		SiNo
			Si salarioUsuario >= 20000 Y salarioUsuario < 30000 Entonces
				Escribir "Usted debe pagar impuestos del 10%";
			SiNo
				Escribir "Usted debe pagar impuestos del 15%";
			FinSi
		FinSi
		
	SiNo
		Escribir "Usted no debe pagar impuestos";
	FinSi
	
FinProceso
