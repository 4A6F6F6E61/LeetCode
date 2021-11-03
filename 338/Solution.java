class Solution
{
    public int[] countBits(int n)
    {
        int[] output = new int[n+1];
        for(int i = 0; i <= n; i++) output[i] = countChars(Integer.toString(i, 2), '1');
        return output;
    }
    public int countChars(String str, char c)
    {
        int count = 0;
        for(int i = 0; i < str.length(); i++) if(str.charAt(i) == c) count += 1;
        return count;
    }
}