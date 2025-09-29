import java.util.Scanner;
class TryFunc{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number to take the factorial");
		int n = sc.nextInt();
		System.out.println("Factorial of " +n + " is :"+ fact(n));
	}
	public static int fact(int n){
		int ans=1;
		for(int i=1 ; i<=n ; i++){
			ans*=i;
		}
		return ans;
	}
}