
class Book {
     String name,author,publisher;
     double price;
     Book(String name,String author,String publisher,double price){

          this.name=name;
          this.author=author;
          this.publisher =publisher;
          this.price=price;
     }

     public String toString(){
          return "book details: title="+ name+"author="+author+"publisher="+publisher+"price="+price +"\n";
     }
}