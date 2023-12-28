

const sumOfNum = (num) => {
    let ans =0;
    while(num != 0)
    {
        let digit = num % 10;
        ans += digit;
        num = Math.floor(num / 10);
    }
    return ans;
}
const productOfNum = (num) => {
    let ans = 1;
    while(num != 0)
    {
        let digit = num % 10;
        ans *= digit;
        num = Math.floor(num / 10);
    }
    return ans;
}

var num = 243;
console.log(sumOfNum(num));
console.log(productOfNum(num));