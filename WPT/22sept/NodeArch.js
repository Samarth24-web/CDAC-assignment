console.log("first");
Promise.resolve().then(() => console.log('Second'));
setTimeout(()=>{
    console.log("third");
} , 0)

console.log("fourth")