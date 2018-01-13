// Aplicaicón para controlar el Elegoo Smart Robot Car Kit v3
// utilizando la programación orientada a objetos
// Por José María Moreno

enum Estado {
        apagado,
        encendido
};

class Led {
    public:
      
      // Constructor de la clase
      Led( int pin );

      void encender();
      void apagar();
      void pruebas();
      Estado dimeEstado();

    private:
      Estado _estado;
      int _pin;
};
