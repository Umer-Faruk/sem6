class Emplyee{

     int id;
     String name,desString;
     String _Date;
     double salary;
     Emplyee(int id,String name, String _date ,double salary,String destination){

          this.id = id;
          this.name=name;
          this._Date =_date;
          this.salary = salary;
          this.desString=destination;

     }

     public String toString(){
          return "id"+id+"\nname:"+name+"\ndate"+_Date+"salary"+salary+"\ndestination"+desString;
     }
}