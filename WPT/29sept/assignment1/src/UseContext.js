import React, { useContext } from 'react'
import MyContext from './Context';

const UseContext = () => {

    const data = useContext(MyContext);
    console.log(data);

  return (
    <div>
        <h1>Value from data :</h1>
        <p>id:{data.id}</p>
        <p>name:{data.name}</p>
    </div>
  )
}

export default UseContext