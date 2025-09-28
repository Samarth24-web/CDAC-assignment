const http = require("http");
const url = require("url");

http.createServer((req , res)=>{
   const u = url.parse(req.url);
   console.log(req.url)
   const pathname = u.pathname;
   const todos = [];

for (let i = 1; i <= 100; i++) {
  todos.push({
    id: i,
    task: `Task number ${i}`
  });
}
   
   let a=pathname[7];
   console.log(a);
   if(pathname == `/todos/${a}`){
     res.writeHead(200, { 'Content-Type': 'application/json' });
    res.end(JSON.stringify(todos[a]))
   } 
   else if(pathname == `/todos`){
    res.writeHead(200 , {"Content-Type":"application/json"})
    res.end(JSON.stringify(todos))
   } 
   else{
    res.end("err")
   }
}).listen(3000 , ()=>{
    console.log("server is running");
})