import java.util.Scanner;

class MT {
    public int factorisation(int n){
        if(n==0)    return 1;
        return n * factorisation(n-1);
    }
}

public class test{
    public static void main(String[] args){
        MT mt = new MT();
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        System.out.println(mt.factorisation(m));
        sc.close();
    }
}