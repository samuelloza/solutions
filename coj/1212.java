import java.util.Scanner;
 
public class Main {
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                String cad = sc.nextLine();
                String[] notas;
                String vec[] = new String[7];
                vec[0] = "W";
                vec[1] = "H";
                vec[2] = "Q";
                vec[3] = "E";
                vec[4] = "S";
                vec[5] = "T";
                vec[6] = "X";
                double vec2[] = new double[7];
                vec2[0] = 1;
                vec2[1] = 0.5;
                vec2[2] = 0.25;
                vec2[3] = 0.125;
                vec2[4] = 0.0625;
                vec2[5] = 0.03125;
                vec2[6] = 0.015625;
                double uno = 1.0;
                double sum = 0;
                while (!cad.equals("*")) {
                        notas = cad.split("/");
                        int cont = 0;
                        for (int i = 1; i < notas.length; i++) {
                                sum = 0;
                                for (int j2 = 0; j2 < notas[i].length(); j2++) {
                                        for (int j = 0; j < 7; j++) {
                                                if (notas[i].substring(j2, j2 + 1).equals(vec[j])) {
                                                        sum = vec2[j] + sum;
 
                                                }
                                        }
                                }
                                if (sum == uno) {
                                        cont++;
                                }
                        }
                        System.out.println(cont);
                        cont = 0;
                        cad = sc.nextLine();
                }
        }
}