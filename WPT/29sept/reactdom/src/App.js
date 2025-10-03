import logo from './logo.svg';
import './App.css';
import Nav from './RouterComponents/Nav';
import { Route, Router, Routes } from 'react-router';
import Home from './RouterComponents/Home';
import Contact from "./RouterComponents/Contact "
import Details from "./RouterComponents/Details "

function App() {
  return (
    <div className="App">
      
        <Nav></Nav>
      <Routes>
        <Route path='/' element={<Home/>}/>
        <Route path='/contact' element={<Contact/>}/>
        <Route path='/detail' element={<Details/>}></Route>
    </Routes>
    </div>
  );
}

export default App;
