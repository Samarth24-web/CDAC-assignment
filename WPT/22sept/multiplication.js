let a = process.argv[2];
let b = process.argv[3];


let promise = new Promise((res,rej)=>{
   if(a>0 && b>0){
    return res("multiplication of two number is:"+(a*b))
   }
   else{
    return rej("number is negative");
   }
})
promise.then((res)=>{
    console.log(res);
}).catch((err)=>
console.log("error"));