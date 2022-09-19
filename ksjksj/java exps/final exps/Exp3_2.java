import java.util.*;

public class Exp3_2
{
    public void Bill(int vp, int sm)
    {
        int bill=vp+sm;
        System.out.println("The bill is:"+bill);
        Exp3_2 menu1 = new Exp3_2();
        menu1.Bill(bill);
    }
    public void Bill(int bill)
    {
        double gst_inc= bill+(bill*0.18);
        System.out.println("The GST inclusive bill amount is: "+gst_inc);
    }
    
    public static void main(String[] args)
    {
        Scanner o = new Scanner(System.in);
        System.out.print("Enter the rate of Vadapav:");
        int vp = o.nextInt();
        System.out.print("Enter the rate of Samosa:");
        int sm = o.nextInt();
        Exp3_2 menu = new Exp3_2();
        menu.Bill(vp,sm);
    }
}
