

let arr=[2, 3, 4];
let choice=4;

switch (choice) {
    case 1:
        arr.push(1);
        break;
    case 2:
        arr.pop();
        break;
    case 3:
        arr.unshift(1);
        break;
    case 4:
        arr.shift();
        break;

    default:
        console.log("not a valid choice");
        break;
}

console.log(arr);