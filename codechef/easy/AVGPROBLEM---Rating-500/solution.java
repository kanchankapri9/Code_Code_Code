import java.util.*;
class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while(T-- > 0)
        {
            int A = sc.nextInt();
            int B = sc.nextInt();
            int C = sc.nextInt();

            if((A + B) > (2 * C))
            {
                System.out.println("YES");
            }
            else
            {
                System.out.println("NO");
            }
        }
    }
}