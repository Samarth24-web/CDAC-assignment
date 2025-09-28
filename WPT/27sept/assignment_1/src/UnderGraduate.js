
 import { useState } from "react";
 export default function UnderGraduate(props){
    const [obj , setObj] = useState("")
    function handelClick(){
      let s=document.getElementById("ssc").value;
      let h=document.getElementById("hsc").value;
      if(s=="" || s==0 || s>100 || h=="" || h==0 || h>100 ){
        setObj(null)
      }
      else{
        setObj({ssc:s , hsc : h})
      }
    }
    return(
        <>
        <label>SSC marks:</label>
        <input type="number" id="ssc"></input>
        <br/>
          <label>HSC marks:</label>
        <input type="number" id="hsc"></input>
        <br/>
        <button id="btn2" onClick={handelClick} >Submit</button>
        <br/>

        
        {
          obj && obj!=""   &&
         Object.keys(props.obj).map(key =>{
          return <h1 key={key}>{key} : {props.obj[key]}</h1>
         })
      }
      
        {
          obj!="" && !obj && <h1>please enter valid details</h1>
        }
        {
          obj && obj!=""   &&
         Object.keys(obj).map(key =>{
          return <h1 key={key}>{key} : {obj[key]}</h1>
         })
      }
        </>
    )
}