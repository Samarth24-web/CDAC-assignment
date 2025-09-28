const express = require ("express")
const url = require("url")
const app = express()


app.use((req, res , next)=>{
   req.abc="this is a value by the middleware"
   next()
})

app.get("/" , (req , res)=>{
    console.log(req.abc)
    res.send(req.abc)
})
app.listen(3000);









