import java.util.Scanner;

public class Main {
    public static void resol(String a, String b) {
        if (a.contains(b)) {
            String aux = b;
            for (int i = 1; aux.length() <= a.length(); i++) {
                if (a.equals(aux)) {
                    System.out.println(i);
                    return;
                } else {
                    aux = aux + b;
                }
            }
            System.out.println(1);
            return;
        } else {
            System.out.println(0);
            return;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a, b;
        while (sc.hasNext()) {
            a = sc.nextLine();
            b = sc.nextLine();
            if (!b.equals(null)) {
                if (a.length() > b.length()) {
                    resol(a, b);
                } else {
                    resol(b, a);
                }
            } else {
                System.out.println(1);
            }

        }
    }

}