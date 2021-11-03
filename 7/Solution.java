class Solution
{
    public int reverse(int x) {
        String x_S = Integer.toString(x), tmp = "";
        boolean negative = false;
        if(x_S.toCharArray()[0] == '-') {
            negative = true;
            x_S = x_S.substring(1, x_S.length());
        }
        for(char s : x_S.toCharArray()) tmp = s + tmp;
        try {
            if(negative) return Integer.parseInt("-" +tmp);
            else return Integer.parseInt(tmp);
        }catch(Exception e) {}
        return 0;
    }
}