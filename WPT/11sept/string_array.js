
let colors = ["red", "blue", "green","black","yellow"];

console.log(colors);
let s= colors.map(e=>e.toUpperCase());
console.log(s);
 colors.map((b , i)=>{
    console.log(b + " " + i);
 })