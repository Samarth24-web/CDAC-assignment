import java.util.*;

class ArrayUtils{

	// to get nth largest number from the array
	private static int getNthLargest(int[] arr , int n){
		int max=Integer.MAX_VALUE;
		for(int i=0 ; i<n ; i++){
			max=getMax(arr , max);
		}
		return max;
	}

	// to get  largest number from the array
	private static int getMax(int[] arr , int n){
		int max=Integer.MIN_VALUE;
		for(int i=0 ; i<arr.length ; i++){
			if(arr[i]>max && max<n){
				max=arr[i];
			}
		}
		return max;
	}

	// to get nth smallest number from the array
	private static int getNthSmallest(int[] arr , int n){
		int min=Integer.MIN_VALUE;
		for(int i=0 ; i<n ; i++){
			min=getMin(arr , min);
		}
		return min;
	}

	// to get  largest number from the array
	private static int getMin(int[] arr , int n){
		int min=Integer.MAX_VALUE;
		for(int i=0 ; i<arr.length ; i++){
			if(arr[i]!=0 &&arr[i]<min && min>n){
				min=arr[i];
			}
		}
		return min;
	}

	//To get factorial of number
        private static int getFactorial(int n){
		int ans=1;
		for(int i=1 ; i<=n ; i++){
			ans*=i;
		}
		return ans;
	}

	//Check for Prime number
	private static boolean isPrime(int n){
		if(n==2) return true;
		for(int i=2 ; i<=Math.sqrt(n) ; i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
	
         // To take the input from the array
	public static void takeInput(int[] arr , Scanner sc){
		for(int i =0 ; i<arr.length ; i++){
			arr[i]=sc.nextInt();
		}
	}
      
        // this function display all elements of the array
	public static void display(int[] arr){
		for(int i =0 ; i<arr.length ; i++){
			System.out.println(i +" : "+arr[i]);
		}
	}

        // To get all the prime no from the array
	public static int[] getAllPrimes(int[] arr){
        	int[] primes=new int[arr.length];
		int cnt=0;
		for(int i =0 ; i<arr.length ; i++){
			if(isPrime(arr[i])){
				primes[cnt++]=arr[i];	
			}
		}
		return cnt==0?null:primes;
	}

	 // To get addition of all the non-prime no from the array
	public static int getAdditionOfAllNonPrimes(int[] arr){
		int sum=0;
		for(int i =0 ; i<arr.length ; i++){
			if(!isPrime(arr[i])){
				sum+=arr[i];	
			}
		}
		return sum;
	}

	// to get Addition of all odd numbers
	public static int getAdditionOfOdds(int[] arr){
		int ans=0;
		for(int i=0 ; i<arr.length ; i++){
			if(arr[i]%2!=0){
				ans+=arr[i];
			}
		}
		return ans;
	}

	//To get Factorial of all no greter than 7
	public static int[] getFactorials(int[] arr){
		int[] factorials= new int[arr.length];
		for(int i=0 ; i<arr.length ; i++){
			if(arr[i] <=7){
				factorials[i]=getFactorial(arr[i]);
			}
			else{
				factorials[i]=-1;
			}
		}
		return factorials;
	}

	//To find ntmaximum prime 
	public static int findNthMaxPrime(int[] arr , int n){
		int[] primes = getAllPrimes(arr);
		if(n>primes.length) return -999999;
		return getNthLargest(primes , n);
	}

	//To find ntmaximum prime 
	public static int findNthMinPrime(int[] arr , int n){
		int[] primes = getAllPrimes(arr);
		if(n>primes.length) return -999999;
		return getNthSmallest(primes , n);
	}


}