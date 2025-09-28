const http = require("http");

http.createServer((req , res)=>{

  if(req.method =="GET"){
    res.end("this is a get method")
  }
  else if(req.method =="POST"){
    res.end("this is a post method")
  }
  else if(req.method =="DELETE"){
    res.end("this is a delete method")
  }
  else if(req.method =="PUT"){
    res.end("this is a put method")
  }
}).listen(3000 , ()=>{
    console.log("server is running")
})