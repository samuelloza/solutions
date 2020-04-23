import java.text.DecimalFormat;
import java.util.Scanner;
 
public class Main{
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                DecimalFormat a = new DecimalFormat("0.00");
                String cad;
                int num, lim;
                num = sc.nextInt();
                cad = sc.next();
                lim = sc.nextInt();
                for (int i = 0; i < lim; i++) {
                        String cad3 = sc.next();
                        double sum = 0;
                        if (cad.equals(cad3)) {
                                System.out.println(a.format(num));
                        } else {
                                for (int i2 = 0; i2 < num; i2++) {
                                        if (cad.substring(i2, i2 + 1).equals(
                                                        cad3.subSequence(i2, i2 + 1))
                                                        && !cad3.substring(i2, i2 + 1).equals("#")) {
                                                sum++;
                                        } else {
                                                if (!cad3.substring(i2, i2 + 1).equals("#")) {
                                                        sum -= 0.25;
                                                }
 
                                        }
                                }
 
                                System.out.println(a.format(sum));
 
                        }
                }
 
        }
 
}