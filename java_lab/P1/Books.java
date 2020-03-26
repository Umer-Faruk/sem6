import java.util.*;

class Books {
     public static void main(String[] args) {

          ArrayList<Book> book = new ArrayList<Book>();

          book.add(new Book("raja rani","tila","r.k.t",400));
          book.add(new Book("humne tumse --","patanahi","mmll",500));

          for(Book i: book){
               System.out.println(i);
          }
          

     }
}
