// Aplicaicón para controlar el Elegoo Smart Robot Car Kit v3
// utilizando la programación orientada a objetos
// Por José María Moreno

#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11

// Creamos un coche y le ponemos nombre
Coche::Coche( String nombre ) {

  // Le asignamos el nombre
  _nombre = nombre;
  ruedas = 4;

  pinMode( IN1, OUTPUT );
  pinMode( IN2, OUTPUT );
  pinMode( IN3, OUTPUT );
  pinMode( IN4, OUTPUT );
  pinMode( ENA, OUTPUT );
  pinMode( ENB, OUTPUT );

  detener();
  
}

void Coche::pruebaLuces() {
}

// Retorna el nombre del coche
String Coche::dameNombre() {
  return _nombre;
}

// Retorna la velocidad actual
String Coche::velocidadActual() {
  switch ( _velocidad )
    {
        case despacio:   
          return "Despacito";
        case normal:   
          return "Normal";
        case rapido: 
          return "Rápido";
        case aTope:      
          return "A tope!";
    }
}

void Coche::encenderLeds() {
  led->encender();
}

// Arranca los motores
void Coche::arrancarMotores() {
  ajustarVelocidad( despacio );
  Serial.println( "Ruuuuuummmmmm" );
}

void Coche::ajustarVelocidad( Velocidad nuevaVelocidad ) {
  _velocidad = nuevaVelocidad;
  switch ( _velocidad ) {
    case despacio:   
      _potenciaDelMotor = 100;
      Serial.println( "Pasamos a velocidad: despacio" );
      break;
    case normal:   
      _potenciaDelMotor = 150;
      Serial.println( "Pasamos a velocidad: normal" );
      break;
    case rapido: 
      _potenciaDelMotor = 220;
      Serial.println( "Pasamos a velocidad: rapido" );
      break;
    case aTope:      
      _potenciaDelMotor = 255;
      Serial.println( "Pasamos a velocidad: aTope" );
      break;
  }
  analogWrite( ENA, _potenciaDelMotor );
  analogWrite( ENB, _potenciaDelMotor );
  Serial.println( "Establecemos velocidad " + String( _potenciaDelMotor ) );
  
  
  
  
}

void Coche::avanza() {

  Serial.println( "Avanzamos a velocidad " + String( _potenciaDelMotor ) );
  
  digitalWrite( IN1, HIGH );
  digitalWrite( IN2, LOW );
  digitalWrite( IN3, LOW );
  digitalWrite( IN4, HIGH );

}

void Coche::retrocede() {
  
}
void Coche::detener() {
  digitalWrite( ENA, LOW );
  digitalWrite( ENB, LOW );
  Serial.println( "Nos detenemos!" );
}
void Coche::giraDerecha() {
  
}
void Coche::giraIzquierda() {
  
}

