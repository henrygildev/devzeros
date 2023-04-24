Proceso t_1_d_identificarVocales
	Definir letraUsuario Como Caracter;
	
	// Captura dedatos
	escribir "Por favor ingresa una letra";
	leer letraUsuario;
	
	// Proceso de verificacion
	Si letraUsuario == "a" o letraUsuario == "e" o letraUsuario == "i" o letraUsuario == "o" o letraUsuario == "u" Entonces
		Escribir "La letra es una Vocal";
	SiNo
		Escribir "La letra es una consonante";
	FinSi
	
FinProceso
