// Aplicaicón para controlar el Elegoo Smart Robot Car Kit v3
// utilizando la programación orientada a objetos
// Por José María Moreno

#include "WString.h"
#include "led.h"
#include "Arduino.h"

enum Velocidad {
        despacio,
        normal,
        rapido,
        aTope
};

class Coche {
    public:

      // Constructor de la clase
      Coche( String nombre );

      // Retorna el nombre del coche
      String dameNombre();

      String velocidadActual();

      void arrancarMotores();

      void ajustarVelocidad( Velocidad nuevaVelocidad );

      void avanza();
      void retrocede();
      void detener();
      void giraDerecha();
      void giraIzquierda();
      void pruebaLuces();
      
      

      void encenderLed();
     
      int ruedas;

      // Le definimos el led de la placa
      Led* led = new Led( 13 );

    private:
      String _nombre;
      Velocidad _velocidad;
      unsigned char _velocidadAnalogica;
      
          
};


class Rueda {};
