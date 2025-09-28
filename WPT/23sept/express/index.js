const express = require("express")
const path = require("path")
const fs = require("fs")
const url = require("url")
const readline = require("readline")
const app = express()

app.use(express.json())
app.use(express.urlencoded({ extended: true }))
app.use(express.static(path.join(__dirname, "public")))
app.set("view engine", "ejs")

let index = 1;

const task = {
    title: "abc",
    desc: "12"
}

const mapTask = new Map();
app.get("/", (req, res, next) => {
    fs.readdir("fileDir", (err, data) => {
        if (err) {
            return next(new Error("Can't read the file"));
        }
        res.render("index", { "tasks": data })
    });
});


app.get("/creat", (req, res, next) => {
    // const d=url.parse()
    fs.writeFile(`fileDir/file${index++}`, `${task.title} +"\n"  + ${task.desc}`, (err) => {
        if (err) throw new Error("file cant create");
        else console.log("file created");
    })
    res.redirect("/")
})

app.listen(3000, () => {
    console.log(" server is rinning on port 3000")
})