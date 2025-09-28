import React , {useState} from 'react'

const DataPrint = () => {
    const [data , setData] = useState("");
    function handelEvent(){
        const val = document.getElementById("ip").value;
        setData(val)
    }
  return (
    <div>
        <label htmlFor='data'>Enter the data</label>
        <input id="ip" type="text" name='data'></input>
        <br/>
        <h1>Data in ip filed is : {data}</h1>
        <button onClick={handelEvent}> Submit </button>
    </div>
  )
}

export default DataPrint