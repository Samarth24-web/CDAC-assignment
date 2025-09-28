function Calculate(props){

return(
    <>
    <h3>Addition is {parseInt(props.num1)+ parseInt(props.num2)}</h3>
    <h3>Multiplication is {props.num1* props.num2}</h3>
    <h3>Division is {props.num1/ props.num2}</h3>
    <h3>Substraction is {props.num1- props.num2}</h3>
    </>
)
}
export default Calculate;