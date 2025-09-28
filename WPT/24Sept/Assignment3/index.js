const express = require("express")
const dataJson = require("./MOCK_DATA.json");
const app = express()

// 1) get  -  hostname:port/users
// 2) get with specific id  - hostname:port/users/:id 
// 3)get data with id and email  - hostname:port/users/:id/:email
// 4) and delete operation  - hostname:port/users
let data=[];
dataJson.forEach((i)=>{
    data.push(i);
});

app.get("/users" , (req , res)=>{
    res.json(data);
})

app.get("/users/:id" , (req , res)=>{
    let user = data.find((i)=>{
        if(i.id==req.params.id){
            return i;
        }
    })
    res.json(user);
})

app.get("/users/:id/:email" , (req , res)=>{
    let user = data.find((i)=>{
        if(i.id==req.params.id || email==req.params.email){
            return i;
        }
    })
    res.json(user);
})

app.delete("/users/:id" , (req , res)=>{
     data.find((i , ind)=>{
        if(i.id==req.params.id){
            data.splice(ind , 1) 
            return
        }
    })
    res.json(data);
})

app.listen(3000 , ()=>{
    console.log("server is running")
})

