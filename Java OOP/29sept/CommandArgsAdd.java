class CommandArgsAdd{
	public static void main(String[] args){
		if(args.length==0){
			System.out.println("Error: please enter atleast 1 argument");
			return;
		}
		int sum=0;
		for(int i=0 ; i<args.length ; i++){
			sum+=Integer.parseInt(args[i]);
		}
		System.out.println("sum :"+sum);
	}
}