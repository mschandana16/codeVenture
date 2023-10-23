// this is a sample solution to the hackerrank question on Longest Palindromic Substring
import java.util.Scanner;

public class LongestPalindromicSubstring {
    public static String longestPalindrome(String s) {
        int n = s.length();
        int maxLength = 1;
        int start = 0;
        boolean[][] dp = new boolean[n][n];

        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
        }

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (s.charAt(i) == s.charAt(j)) {
                    if (i - j == 1 || dp[i - 1][j + 1]) {
                        dp[i][j] = true;
                    }
                }

                if (dp[i][j] && maxLength < i - j + 1) {
                    maxLength = i - j + 1;
                    start = j;
                }
            }
        }

        return s.substring(start, start + maxLength);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        String s = scanner.nextLine();

        String longestPalindrome = longestPalindrome(s);
        System.out.println(longestPalindrome);
    }
}
