// largest element in an array using for loop
console.log("using for loop");
let arr =[5,9,2,56,11,1,55];
 let large_ele=-1;
for(let i =0;i<arr.length;i++){
    if(arr[i]>large_ele){
        large_ele=arr[i];
    }
    
}
console.log("largest element is :"+large_ele);

console.log("using for each loop");

arr.forEach(element=>{
    if(element>large_ele){
        element=large_ele;
    }
})
console.log("largest element is :"+large_ele);

console.log("using sort");

function large_using_sort(arr){
arr.sort((a,b)=> a-b)
return arr[arr.length-1];}

console.log("largest element is :"+large_using_sort(arr));