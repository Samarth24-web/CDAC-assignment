
const arr =[ 32, 435,53,43,23,35,23,54];

function firstWay(arr){
    let ans=arr[0];
    for (let index = 1; index < arr.length; index++) {
        if(ans<arr[index]){
            ans=arr[index];
        }
    }
    return ans;
}

console.log("using for loop: "+firstWay(arr));

function secondWay(arr){
    let ans=arr[0];
    arr.forEach(element => {
        if(element>ans){
            ans=element;
        }
    });
    return ans;
}

console.log("using for each loop: "+secondWay(arr));

function thirdWay(arr){
    let ans=arr[0];
    for(const a of arr ){
        ans=a>ans?a:ans;
    }
    return ans;
}

console.log("using for of loop and ternary operator: "+secondWay(arr));