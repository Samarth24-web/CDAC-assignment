// 1) Write a function getFactorialImpl ( choice="FORLOOP" ) ----it could be FORLOOP or RECUR
// 	Function Fact2(n1)
// 	Use recursion and print the factorial
// 	If the choice is FORLOOP return Fact1
// 	If the choice is RECUR then return Fact2
// 	Outside --- call let rv = getFactorialImpl("RECUR")
// 	rv(3)
// 	Rv = getFactorialImpl()
// 	rv(5)

function getFactorialImpl (x ,  choice="FORLOOP" ){
    if(choice==="FORLOOP"){
        console.log("using for loop");
        let ans=1;
        for(let i=1 ; i<=x ; i++){
            ans*=i;
        }
        return ans;
    }else{
        if(x===1){
            return x;
        }
        return x * getFactorialImpl(x-1 , choice);
    }
}

let fact1=getFactorialImpl(3);
console.log(fact1);
let fact2=getFactorialImpl(5 , "hghjgj");
console.log(fact2);



