class PrintTable{
	public static void main(String[] args){
		if(args.length==0){
			System.out.println("Error : please enter atleast one argument");
			return ;
		}
		print(Integer.parseInt(args[0]));
	}
	
	// this function will use to print the table
	public static void print(int n){
		for(int i=1 ; i<=10 ; i++){
			System.out.println(n+" X " +i +" = " + (n*i));
		}
	}
}