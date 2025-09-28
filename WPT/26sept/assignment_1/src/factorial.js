function Factorial(props){
let fact =1;
for(let i=1;i<=props.num;i++){


  fact=fact*i;
  
}
return ( 
    <h1><i>Factorial of {props.num} is: {fact}</i></h1>
)
}

export default Factorial;