import { useState } from "react";

function Display(){
  const [ans, setAns] = useState("")
 function Uppercase(){
  let a= document.getElementById("name").value
    
    setAns(a.toUpperCase());
}
function Lowercase(){
      let a= document.getElementById("name").value
    setAns(a.toLowerCase()); 
}
function Titlecase(){
       let a= document.getElementById("name").value
    setAns(a[0].toUpperCase() + a.slice( 1).toLowerCase());
    // setAns(a.toCamalCase())
}
return(
<>
<label>Enter name</label>
<input type="text" id ="name"></input>
<br></br>
<h1>{ans}</h1>

<label>Uppercase</label>
<input type="radio" id ="r1" name="radio" onClick={Uppercase}></input>
<label>Lowercase</label>
<input type="radio" id ="r2" name="radio" onClick={Lowercase}></input>
<label>Titlecase</label>
<input type="radio" id ="r3" name="radio" onClick={Titlecase}></input>
</>
)
}
export default Display;