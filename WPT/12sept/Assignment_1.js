


function calculate(...a){
let addition = 0;
    for(let i=0;i<a.length;i++){
       addition = addition+a[i];
      if(a[i]%2!=0){
        console.log(a[i])

      }
    }
    console.log("addition of numbers is:"+addition);
   // let odd_arr= a.filter(i=>i%2!=0)
    //console.log(odd_arr);
}

calculate(1,2);
calculate(88,9,77,12,2);
calculate(1,2,9,8,7,5,4,555,66,321);