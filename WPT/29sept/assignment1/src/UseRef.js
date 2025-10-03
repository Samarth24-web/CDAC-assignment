import React , {useRef, useState} from 'react'

let UseRef = () => {
    let curRef = useRef(1);
    const [val , setVal]=useState(curRef.current)
    function handelClick(){
        console.log(curRef.current)
        curRef.current+=1;
        
    }
  return (
    <div>
         <p>{curRef.current}</p>
         <button onClick={handelClick}>Enter</button>
         <button onClick={()=>{setVal(curRef.current)}}>Enter</button>
    </div>
  )
}

export default UseRef;
