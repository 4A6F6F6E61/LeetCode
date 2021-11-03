class Solution {
    public boolean isPalindrome(int x) {
        String s = Integer.toString(x), s2 = "";
        for (char p : s.toCharArray()) s2 = p + s2;
        return s.equals(s2);
    }
}