function Opearate(props) {
    function calculate() {

        switch (props.operator) {
            case "+":
                return (parseInt(props.n1) + parseInt(props.n2))
                break;
            case "-":
                return (parseInt(props.n1) - parseInt(props.n2))
                break;
            case "*":
                return (parseInt(props.n1) * parseInt(props.n2))
                break;
            case "/":
                return (parseInt(props.n1) / parseInt(props.n2))
                break;
            case "%":
                return (parseInt(props.n1) % parseInt(props.n2))
                break;
            default:
                return "Invalid";
                break;
        }
    }
    return (
        <h2> {props.operator} of the numbers {props.n1} and {props.n2} is : {calculate()}</h2>
    )
}
export default Opearate;