import java.text.DecimalFormat;
import java.util.Scanner;
//1023
public class Main{
	public static void main(String[] args) {
		DecimalFormat df = new DecimalFormat("0.00"); 
		Scanner sc = new Scanner(System.in);
		String aux = "";
		float sum = 0;
		for (int i = 0; i < 12; i++) {
			aux = sc.nextLine();
			sum = Float.parseFloat(aux) + sum;
		}
		String co= df.format((sum / 12));
		System.out.print("$"+co);
		// $1581.42
	}

}