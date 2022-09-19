import java.util.*;

public class Exp3_1
{
    public Exp3_1(int vp, int sm)
    {
        int bill=vp+sm;
        System.out.println("The bill is:"+bill);
        Exp3_1 menu1 = new Exp3_1(bill);
    }
    public Exp3_1(int bill)
    {
        double gst_inc= bill+(bill*0.18);
        System.out.println("The GST inclusive bill amount is: "+gst_inc);
    }
    
    public static void Exp3_1(String[] args)
    {
        Scanner o = new Scanner(System.in);
        System.out.print("Enter the rate of Vadapav:");
        int vp = o.nextInt();
        System.out.print("Enter the rate of Samosa:");
        int sm = o.nextInt();
        Exp3_1 menu = new Exp3_1(vp,sm);
    }
}
