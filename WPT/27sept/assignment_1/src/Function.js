import { useState } from "react";
function Factorial(props){

    const [ans , setAns] = useState("") 
    let getFactorial=()=>{
       let fact=1;
        for(let i=1;i<=props.n;i++){
         fact=fact*i;     
       }
       setAns(fact);
    }

    return(
        <>

        <h1> Factorial of {props.n} is :{ans}</h1>
        <button onClick={getFactorial}> submit </button>
        </>
    )

}
export default Factorial;