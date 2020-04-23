import java.util.Hashtable;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        String[] s={"`1234567890-=","QWERTYUIOP[]","ASDFGHJKL;'","ZXCVBNM,./"};
        Scanner scan=new Scanner(System.in);
        s[1]+=(char)(92);
        String cad="",out="";
        Hashtable< String,String> table=new Hashtable< String,String>();
        for(int i=0;i< 4;i++){
            for(int j=1;j< s[i].length();j++){
                table.put(s[i].charAt(j)+"", s[i].charAt(j-1)+"");
            }
        }
        table.put(" ", " ");
        while(scan.hasNext()){
            cad=scan.nextLine();
            out="";
            for(int i=0;i< cad.length();i++){
                out+=table.get(cad.charAt(i)+"");
            }
            System.out.println(out);
        }
    }
}