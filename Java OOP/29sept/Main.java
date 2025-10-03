import java.util.*;
class Main{
	
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the size of the array");
		int size=sc.nextInt();
		int[] arr = new int[size];
		ArrayUtils.takeInput(arr , sc);
		
		int choice;
		
		do{
			 System.out.println("1) print all elements \n  2) print all prime elements \n3) print adition of all prime elements \n 4) print adition of all odd elements \n5)factorial of all numbers greter than 7 \n 6) find nth largrst prime number\n7)find nth smallest prime number\n 8) Exit ");	

		 	System.out.println("Enter your choice");
			choice=sc.nextInt(); 

			switch(choice){
				case 1 :
					System.out.println("All Elements are : ");
					ArrayUtils.display(arr);
					break;
				case 2 :
					System.out.print("All prime numbers are : ");
					int[] primes = ArrayUtils.getAllPrimes(arr);
					if(primes==null){
						System.out.println("No prime element is present in the array");
					}
					else{
						ArrayUtils.display(primes);
					}
					break;

				case 3 :
					System.out.print(" Addition of all non prime numbers : ");
					int ans = ArrayUtils.getAdditionOfAllNonPrimes(arr);
					System.out.println(ans);
					break;
				case 4 :
					System.out.print(" Addition of all odd numbers : ");
					int ans1 = ArrayUtils.getAdditionOfOdds(arr);
					System.out.println(ans1);
					break;
				case 5 :
					System.out.print(" factorial of all numbers greter than 7: ");
					int[] ans2 = ArrayUtils.getFactorials(arr);
					ArrayUtils.display(ans2);
					break;
				case 6 :
					System.out.print(" Enter the number : ");
					int n =0; 
					n=sc.nextInt();
					System.out.println(" Find"+n+" largest prime: ");
					int ans3 = ArrayUtils.findNthMaxPrime(arr , n);
					System.out.println(ans3);
					break;
				case 7 :
					System.out.print(" Enter the number : ");
					int n1 = 0;
					n1=sc.nextInt();
					System.out.println(" Find " + n1 +" th smallest prime: ");
					int ans4 = ArrayUtils.findNthMinPrime(arr , n1);
					System.out.println(ans4);
					break;

				case 8 :
					System.out.print(" Thank you for the visit");
					break;
				case 9 :
					System.out.print(" Wrong Choice . Try Again !!!!!!!");
					break;
			}
		}	while(choice!=8);
	}

}