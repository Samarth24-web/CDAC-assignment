const f = require('fs')

// f.writeFile('sample.txt','hiiiiiiiiii, how are you',(err)=>
// {
//     console.log(err);
// }
// )

// f.readFile('abc.txt','utf8',(err,data)=>{
//     if(err){
//         console.log("error")
//     }
//     else{
//         console.log(data);
//     }
// })
// f.appendFile("sample.txt" , "fhjdfsadfuywfgdg" , (err)=>{
//   if (err) console.log(err);
// })

// f.rename("sample.txt" ,"new.txt" , (err)=>{
//     if(err) console.log(err);
// })

// f.unlink("new.txt" , (err)=>{
//     if (err) console.log("err");
// })

// f.mkdir("abc" , (err)=>{
//     if(err) console.log(err);
// })

// f.rmdir("abc" , (err)=>{
//     if(err) console.log(err);
// })

// sync way to create the file
// try {
//   f.writeFileSync('sample.txt', 'hiiiiiiiiii, how are you');
//   console.log('File written successfully');
// } catch (err) {
//   console.error('Error writing file:', err);
// }

// try{
//     let data = f.readFileSync("sample.txt" , "utf8");
//     console.log(data);
// }
// catch(e){
// console.log(e)
// }