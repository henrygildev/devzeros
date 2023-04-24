Proceso t_1_m_condicional1
	Definir edadUsuario Como Entero;
	Definir generoUsuario Como Caracter;
	
	// Captura de Datos
	Escribir "Por favor ingrese su edad";
	Leer edadUsuario;
	Escribir "Por favor ingrese su genero";
	leer generoUsuario;
	
	// Verificacion
	Si generoUsuario == 'm' Entonces
		si edadUsuario > 18 Entonces
			escribir "Eres un hombre adulto";
		SiNo
			escribir "Usted es una hombre menor de edad";
		FinSi
	SiNo
		Si edadUsuario > 18 Entonces
			escribir "usted es una mujer mayor de edad";
		SiNo
			escribir "usted es una mujer menor de edad";
		FinSi
	FinSi
	
FinProceso
