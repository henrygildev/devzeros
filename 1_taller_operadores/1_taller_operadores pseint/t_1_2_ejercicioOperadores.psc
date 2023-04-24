Proceso ejercicioOperadores_b
	// Declaracion de Varialbles
	definir valorProducto Como Real;
	definir impuestoProducto Como Real;
	definir precioFinal Como Real;
	
	// Capture de datos
	Escribir "Por favor ingresa el valor del Producto";
	Leer valorProducto;
	Escribir "Por favor escriba el impuesto a aplicar";
	Leer impuestoProducto;
	
	// Calculos sobre el Proceso
	precioFinal <-  valorProducto + (valorProducto * impuestoProducto/100) ;
	
	escribir " El valor final del producto con impuestos es ", precioFinal;
	
FinProceso
