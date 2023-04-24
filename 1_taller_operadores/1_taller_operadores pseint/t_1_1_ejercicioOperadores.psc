Proceso ejercicioOperadores
	// Declaracion de Varialbles
	definir valorProducto Como Real;
	definir porcentajeDescuento Como Real;
	definir precioFinal Como Real;
	
	// Capture de datos
	Escribir "Por favor ingresa el valor del Producto";
	Leer valorProducto;
	Escribir "Por favor escriba el porcentaje de descuento";
	Leer porcentajeDescuento;
	
	// Calculos sobre el Proceso
	precioFinal <-  valorProducto - (valorProducto * porcentajeDescuento/100) ;
	
	escribir " El valor final del producto con descuento es ", precioFinal;
	
FinProceso
