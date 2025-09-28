let arr=[];
for(let i =2;i<12;i++){
 arr[i-2]=parseInt(process.argv[i])

}
console.log(arr);

let ansEN=0;
let ansEI=0;
let ansP=0;

let isPrime=(n)=>{
    if(n==1) return false;
    for(let i=2 ; i<=Math.sqrt(n); i++){
          if(n%i==0){
            return false;
          }
         
    }
     return true;
}

arr.forEach((ele , ind)=>{
    if(ele%2==0){
        ansEN+=ele;
    }
    if(ind%2==0){
        ansEI+=ele;
    }
    if(isPrime(ele)){
        ansP+=ele;
    }
})



console.log(ansEN);
console.log(ansEI);
console.log(ansP)


