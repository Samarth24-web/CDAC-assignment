import './App.css';
import MyContext from './Context';
import FetchData from './FetchData';
import PassGen from './PassGen';
import Nav from './RouterComponents/Nav';
import UseContext from './UseContext';
import UseRef from './UseRef';
import Form from './html_form'

function App() {
  const data = {
    id:1 ,
    name:"samarth"
  }
  return (
    <>
      {/* <Counter></Counter> */}
      {/* <DataPrint></DataPrint> */}
      {/* <UseRef/> */}
      {/* <FetchData/> */}
      {/* <PassGen/> */}
      {/* <Form></Form> */}
      {/* <MyContext.Provider value={data}>
           <UseContext></UseContext>
      </MyContext.Provider> */}

      <Nav></Nav>
    </>
  );
}

export default App;
