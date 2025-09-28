const express = require("express")
const url = require("url")
const app = express()


app.set("view engine" , "hbs")


let ans = "insert data";

app.get("/" , (req , res)=>{
    res.render("index"  , {"ans" : ans});
})
app.listen(3000)

app.get("/calculate" , (req , res)=>{ 
    const p = url.parse(req.url , true);
    const data=p.query;
    ans=parseInt(data.n1) + parseInt(data.n2);
    res.redirect("/")
})
