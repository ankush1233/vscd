public class rec{
    public static boolean stinc(int AR[], int idx)
    {
      
        if(AR[idx]>=AR[idx+1])
        {
            return false;
        }
        else
        {
            if(idx==AR.length)
            {
                return true;
            }
            stinc(AR, idx+1);
           return false;
        }
        
    }
    public static void main(String[] args) {
        int AR[]={1,2,5};
        System.out.println(stinc(AR, 0));
    }
}