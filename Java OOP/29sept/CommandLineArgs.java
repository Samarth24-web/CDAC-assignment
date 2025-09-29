class CommandLineArgs{
	public static void main(String[] args){
		if(args.length==0){
			System.err.println("Error : Argument list must contains atleast 1 argument");
		}else{
			for(int i=0 ; i<args.length ; i++){
				System.out.println("Hello! "+args[i]);
			}
		}
	}
}