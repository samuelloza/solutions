import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {

		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		String s = "";
		while (!((s = bf.readLine()) == null)) {
			String[] tokens = s.split(" ");
			int LCS = LCS(tokens[0], tokens[1]);
			if (LCS == Math.min(tokens[0].length(), tokens[1].length()))
				System.out.println("Yes");
			else
				System.out.println("No");
		}
	}

	public static int LCS(String A, String B) {
		int[][] LCS = new int[A.length() + 1][B.length() + 1];
		for (int a = 0; a < A.length(); a++) {
			for (int b = 0; b < B.length(); b++) {
				if (B.charAt(b) == A.charAt(a))
					LCS[a + 1][b + 1] = LCS[a][b] + 1;
				else
					LCS[a + 1][b + 1] = Math.max(LCS[a][b + 1], LCS[a + 1][b]);
			}
		}
		return LCS[A.length()][B.length()];
	}
}