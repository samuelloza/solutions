import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // Construimos el vector de enteros
        int vec[] = new int[n];
        // FIn construir el vector de enteros
 
        // Llenamos el vector
        for (int i = 0; i < n; i++) {
            vec[i] = sc.nextInt();
        }
        // Fin de llenar el vector
 
        boolean turno_alicia = true;
        int alicia = 0;
        int bob = 0;
        int tam = n - 1;
        int index = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            // Buscamos el mayor de mas a la izquierda y el de mas a la derecha
            // Comparamos extremos
            if (vec[index] > vec[tam]) {
                maxi = vec[index];
                index++;
            } else {
                maxi = vec[tam];
                tam--;
            }
 
            if (turno_alicia == true) {
                alicia = alicia + maxi;
                turno_alicia = false;
 
            } else {
                bob = bob + maxi;
                turno_alicia = true;
            }
        }
 
        System.out.println(alicia);
        System.out.println(bob);
 
    }
 
}