let n = process.argv[2];

if(n>=1 && n<=5){

  for(let i=1;i<=n;i++){
    let row ='';
    for(let j =n; j>=i;j--)
        {
            row+="*";

        }
        console.log(row);

  }
}
else{
    console.log("error..enter valid number");
}