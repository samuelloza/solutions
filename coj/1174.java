import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		for (Scanner scan = new Scanner(System.in); scan.hasNext();) {
			System.out.println(f(scan.next()));

		}

	}

	static String f(String s) {
		char[] cs = s.toCharArray();
		StringBuilder sb = new StringBuilder();
		if (!Character.isLowerCase(cs[0])|| (s.matches(".*[A-Z].*") && s.matches(".*_.*"))|| s.matches(".*_$")) {
			return "Error!";
		}
		boolean b = s.contains("_");
		for (int i = 0; i < cs.length; i++) {
			if (!b && Character.isUpperCase(cs[i])) {
				sb.append('_');
				sb.append(Character.toLowerCase(cs[i]));
			} else 
				if (b && cs[i] == '_') {
				if (Character.isLowerCase(cs[++i])) {
					sb.append(Character.toUpperCase(cs[i]));
				} else {
					return "Error!";
				}
			} else {
				sb.append(cs[i]);
			}
		}
		return sb.toString();
	}
}