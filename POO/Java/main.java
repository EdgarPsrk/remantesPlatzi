package Java;

class Main
 {
     public static void main( final String[] args)
      {
         System.out.println("Hola Mundo");
         final Car carro = new Car("AMQ123", new Account("Andres Herrera", "AND123"));
         carro.setPassenger(4);
         carro.printDataCar();

         final Car carrito = new Car("QWE567", new Account("Andrea Herrera", "ANH456"));
         //carrito.passegennger = 3;
         carrito.printDataCar();
      }
 }