Proceso ejercicioOperadores_c
	definir valorPrestamo, valorTotal Como Real;
	definir interesPrestamo, totalDeuda, totalIntereses Como Real;
	definir plazoMeses como real; 
	definir cuotasMensuales Como Real;
	
	// Captura de datos del Usuario
	escribir "Por favor ingresa el valor de tu prestamo";
	Leer valorPrestamo;
	Escribir "Por favor ingresa la tasa de interes mensual del prestamo";
	Leer interesPrestamo;
	Escribir "Por favor ingresa el plazo del prestamo en meses";
	Leer plazoMeses;
	
	// Calculos del prestamo
	totalDeuda <- valorPrestamo * (interesPrestamo/100);
	totalIntereses <- totalDeuda * plazoMeses;
	valorTotal <- valorPrestamo + totalIntereses;
	cuotasMensuales <- valorTotal / plazoMeses;
	
	Escribir "El valor de las cuotas mensuales de su prestamo es: ", cuotasMensuales; 
FinProceso
