function Calculate(props){
     let ans =0;
    switch (props.operator) {
        case "+":
             ans = props.n1+props.n2;
            break;
             case "-":
             ans = props.n1-props.n2;
            break;
             case "*":
             ans = props.n1*props.n2;
            break;
             case "/":
             ans = props.n1/props.n2;
            break;
    
        default:
            ans ="invalid";
            break;
    }
        return(
            <>
              <h1>
            Addition of {props.n1} and {props.n2} is : {props.n1+props.n2}<br></br>
         
            Substraction of {props.n1} and {props.n2} is : {props.n1-props.n2}<br></br>
             Multiplication of {props.n1} and {props.n2} is : {props.n1*props.n2}<br></br>
              Division of {props.n1} and {props.n2} is :{props.n1/props.n2}<br></br>
           
         
            {props.operator} of {props.n1} and {props.n2} is : {ans}

            </h1>
             </>
        )
}
export default Calculate;