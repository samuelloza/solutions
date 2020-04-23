import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String cad = sc.nextLine();
        boolean sw = false;
        int cont = 0;
        for (int i = 0; i < cad.length(); i++) {
            cont=0;
            for (int j = 0; j < cad.length(); j++) {
                if (cad.charAt(i) == cad.charAt(j)) {
                    cont++;
                    if (cont == 7) {
                        sw = true;
                        break;
                    }
                } else {
                    cont = 0;
                }

            }
        }
        if (sw) {
            System.out.println("YES");
        } else {
            System.out.println("NO");

        }

    }
}