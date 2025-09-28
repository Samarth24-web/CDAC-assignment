import logo from './logo.svg';
import './App.css';
import Factorial from './Function'
import Calculate from './calculator'
import Display from './Assignment_4';

function App() {
  return (
    <>
   <Factorial n={5}></Factorial>
   <Calculate n1={10} n2={2} operator="+"></Calculate>
  <Display></Display>
  
    </>
  );
}

export default App;
