package Java;

public class Car 
 {
     Integer id;
     String lincense;
     Account driver;
     private Integer passegennger;

     public Car(String license, final Account driver)
     {
         this.lincense = license;
         this.driver = driver;

     }
    
    void printDataCar()
    {
        System.out.println("Placa: " + lincense + ", Name Driver: " + driver.name + "Pasajeros: " + passegennger);
    }
    public Integer getPassenger()
    {
        return passegennger;

    }
    public void setPassenger(Integer passenger)
    {
        if ( passenger == 4)
        {
            this.passegennger = passenger;
        }
        else
        {
            System.out.println("Nesesitas asignar 4 asientos");
        }
       
        
 
    }
 }