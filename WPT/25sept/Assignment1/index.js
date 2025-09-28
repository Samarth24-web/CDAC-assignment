const express = require ('express');
const data = require("./MOCK_DATA.json")
const app = express();

app.use(express.urlencoded({extended : true}));
app.use(express.json())

app.post("/addUser" , (req , res)=>{
    const i = data.length+1;
    const obj =req.body;
    const newUser = { "id" : i ,  ...obj};
    data.push(newUser);
    res.send(data)
})

app.delete("/deleteUser/:id" , (req , res)=>{
   let dIndex ;
    data.find((obj , ind)=>{
        if(obj.id==req.params.id){
            dIndex=ind;
            return;
        }
    })

    data.splice(dIndex , 1);
     res.send(data);

})

app.put("/updateuser/:id" , (req , res)=>{
    const index = data.findIndex(
        i => i.id==req.params.id
    )
    const obj = req.body;
    data.splice(index , 1 , {"id" :req.params.id , ...obj});
    res.send(data);
})

app.listen(3000)