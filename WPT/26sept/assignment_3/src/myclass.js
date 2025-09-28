import React from "react";
class Myclass extends React.Component{
    
         constructor(props){
            
            super(props)
           // this.state={
            //    name:"abc" 
            
         }


      Lowercase() {
      let value =  document.getElementById("1").value;
        if(value==""){
            console.log("Invalid")
            //this.setState({name:"Invalid"})
        }
        else{
            console.log(value.toLowerCase())
            //this.setState({name:value.toLowerCase()})
        }
      }
       Uppercase() {
      let value =  document.getElementById("1").value;

        if(value==""){
            console.log("Invalid")
           // this.setState({name:"Invalid"})
        }
        else{
            console.log(value.toUpperCase())
             //this.setState({name:value.toUpperCase()})
        }
      }
    render(){
        return(
 <>
    <label>Enter your name</label>
    <input type="text" id="1"></input><br></br>
    <button id="btn1" onClick={this.Uppercase}>UpperCase</button>
     <button id="btn2" onClick={this.Lowercase}>LowerCase</button>
   

</>)
    }
    
}
export default Myclass;