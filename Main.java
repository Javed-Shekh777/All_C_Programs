import java.util.Scanner;
class Algebra {
    int add(int a,int b){
        int ans = a + b;
        return ans;
    }
}

public class Main {
    public static void main(String[] args) {
        Algebra obj = new Algebra();
        int x,y;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a two number : ");
        x = sc.nextInt();
        y = sc.nextInt();
        System.out.println("Sum of two number is : " );
        int ans = obj.add(x,y);
        System.out.println(ans);
    }
}
