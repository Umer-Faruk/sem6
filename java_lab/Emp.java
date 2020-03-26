import java.util.*;

class Emp {
     public static void main(String[] args) {

          HashMap<String,Emplyee> emp = new HashMap<String,Emplyee>();

          emp.put("umer",putter());
          emp.put("faruk", new Emplyee(200, "faruk", "12/2/12", 1000.0, "bangalure"));
          emp.put("abhi", new Emplyee(200, "faruk", "12/2/12", 1000.0, "bangalure"));



          ArrayList<String> l = new ArrayList<String>(emp.keySet());

          
          Collections.sort(l);

          for( String i : l){
               System.out.println(i+"="+emp.get(i));
          }

          


     
          // System.out.println(emp);

          // for(String i : emp.keySet() ){
          //      System.out.println(i +"=" +emp.get(i) );
          // }


         

     }

     public  static Emplyee putter() {


        Emplyee e1 = new Emplyee(100, "umer", "12/2/12", 1000.0, "bangalure");
         return e1;
               
     }

}

