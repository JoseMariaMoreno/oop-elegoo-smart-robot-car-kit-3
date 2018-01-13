// Aplicaicón para controlar el Elegoo Smart Robot Car Kit v3
// utilizando la programación orientada a objetos
// Por José María Moreno

#include "coche.h"

// Definimos el coche indicándole un nombre
Coche coche( "Cyborg robot" );

// Inicializamos todos los parámetros de la aplicación
void setup() {

  // Iniciamos el puerto serie
  Serial.begin( 9600 );
  
  // Probamos a imprimir un primer texto
  Serial.println( "Aplicación iniciada" );

  // Presentamos al coche en sociedad
  Serial.println( "Os presento a " + coche.dameNombre() );
  Serial.println( "Tiene " + String( coche.ruedas ) + " ruedas y muchas ganas de diversión" );
  
  // Arrancamos los motores
  coche.arrancarMotores();
  

}

void loop() {

 
  
  coche.ajustarVelocidad( despacio );
  Serial.println( coche.velocidadActual() );
  coche.led->encender();
  coche.avanza();
  delay( 1000 );
  coche.detener();
  
  coche.ajustarVelocidad( normal );
  Serial.println( coche.velocidadActual() );
  coche.led->apagar();
  delay( 1000 );
  coche.detener();
  
  coche.ajustarVelocidad( rapido );
  Serial.println( coche.velocidadActual() );  
  delay( 1000 );
  coche.detener();
  
  coche.ajustarVelocidad( aTope );
  Serial.println( coche.velocidadActual() );
  delay( 1000 );
  coche.detener();
  
  
}
