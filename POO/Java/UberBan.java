package Java;
import java.util.ArrayList;
import java.util.Map;

class UberBan extends Car
{
   Map<String, Map<String, Integer>> typeCarAccepted;
   ArrayList<String> seatMaterial;

    public UberBan(String license, Account driver, 
    Map<String, Map<String, Integer>> typeCarAccepted, 
    ArrayList<String> seatMaterial)
    {
        super(license, driver);
        this.typeCarAccepted = typeCarAccepted;
        this.seatMaterial = seatMaterial;
    }

}