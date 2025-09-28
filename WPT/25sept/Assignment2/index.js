const express = require("express")
const path = require("path")
const app = express()


app.get("/" , (req , res)=>{
    const p = path.join(__dirname , "index.html")
    res.sendFile(p);
})

app.listen(3000)