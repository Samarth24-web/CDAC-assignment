import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import Factorial from './factorial';
import Calculate from './calculator';
import Opearate from './operation'
// import Factorial2 from './factorial2';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
   <Factorial num="5"></Factorial>
   <Calculate num1="4" num2="5"></Calculate>
   <Opearate operator="+" n1="10" n2="5"></Opearate>
   
  </React.StrictMode>
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
