
class Resturant {
   public String foodname;
   public String street;
}

class Bar {
   public String foodname;
   public String street;
}

public class EquivalenceTester {

    public static void main(String[] args) {
        
        Resturant chair=new Resturant(); 
        Bar table;  
        
        chair.foodname="wings";
        chair.street="22 Edgewood";
        try {  
            
                table=chair;
        
               System.out.println(table.foodname+"  "+table.street);
        }catch(Exception e) {
            System.out.println("Language is name equivalence.");
        }       
    }
}
