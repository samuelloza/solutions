import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Vector;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Vector<String> miVector = new Vector<String>();
        int x, y;
        double z;
        int yy = 0;
        int i = 0;
        String vec[] = new String[2000];
        String vec2[] = new String[2000];
        int vec3[] = new int[2000];
        String vec4[] = new String[2000];

        x = sc.nextInt();
        y = sc.nextInt();
        String gg = sc.nextLine();
        z = new Double(gg).doubleValue();

        for (int i1 = 0; i1 < x; i1++) {
            vec[i1] = sc.next();
            vec3[i1] = sc.nextInt();
        }
        for (int i2 = 0; i2 < y; i2++) {
            vec2[i2] = sc.next();
        }

        while (yy < x) {
            if ((vec3[yy] * z) >= 100) {
                String r;
                r = String.valueOf(vec3[yy] * z);
                if (r.contains(".")) {
                    int posi2 = r.indexOf(".");
                    posi2 = Integer.parseInt(r.substring(posi2 + 1, posi2 + 2));
                    if (posi2 > 5&&posi2%2!=0) {
                        vec4[i] = vec[yy] + " "
                                + String.valueOf(Math.round(vec3[yy] * z));
                    } else {
                        vec4[i] = vec[yy] + " "
                                + String.valueOf((int) (vec3[yy] * z));
                    }

                } else {
                    vec4[i] = vec[yy] + " "
                            + String.valueOf((int) (vec3[yy] * z));
                }

                i++;
            }
            yy++;
        }
        for (int ii = 0; ii < y; ii++) {
            vec4[i] = vec2[ii] + " " + 0;
            i++;
        }
        for (int j = 0; j < i; j++) {
            String hh[] = vec4[j].split(" ");
            for (int j2 = j + 1; j2 < i; j2++) {
                String hhh[] = vec4[j2].trim().split(" ");
                if (hh.length == 2) {
                    if (hh[0].trim().equals(hhh[0].trim())) {
                        vec4[j2] = " ";
                    }
                }

            }
        }

        int conta = 0;
        for (int j = 0; j < i; j++) {
            if (!vec4[j].equals(" ")) {
                miVector.add(vec4[j]);
                conta++;
            }
        }

        Collections.sort(miVector, new Comparador());
        System.out.println(conta);
        for (String sElemento : miVector) {
            System.out.println(sElemento);
        }
    }
}

class Comparador implements Comparator<String> {
    public int compare(String s1, String s2) {
        return s1.toLowerCase().compareTo(s2.toLowerCase());
    }
}