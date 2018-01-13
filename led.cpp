// Aplicaicón para controlar el Elegoo Smart Robot Car Kit v3
// utilizando la programación orientada a objetos
// Por José María Moreno

#include "led.h"
#include "Arduino.h"

// Creamos un led
Led::Led( int pin ) {
  _pin = pin;
  Serial.begin( 9600 );
  pinMode( _pin, OUTPUT ); 
  Serial.println( "Led de la placa inicializado en pin " + String( _pin ) );
  _estado = apagado;
}

void Led::pruebas() {
  encender();
  delay( 400);
  apagar();
  delay( 400);
  encender();
  delay( 400 );
  apagar();
  delay( 400 );
  encender();
  delay( 400 );
  apagar();
}

void Led::encender() {
  digitalWrite( _pin, HIGH );
  _estado = encendido;
}
void Led::apagar() {
  digitalWrite( _pin, LOW );
  _estado = apagado;
}

Estado Led::dimeEstado() {
  return _estado;
}

