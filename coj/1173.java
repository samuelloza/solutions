import java.io.*;
import java.util.*;

public class Main{

    public static void main (String args[])
    {       
       Scanner in=new Scanner(System.in);
       while(in.hasNextLine())
       {
         String cad=in.nextLine();
         int i=cad.indexOf("BUG");
         
         while(i!=-1)
         {
             cad=cad.substring(0,i)+cad.substring(i+3);
             i=cad.indexOf("BUG");
         }
         System.out.println(cad);
       }   
    }
}