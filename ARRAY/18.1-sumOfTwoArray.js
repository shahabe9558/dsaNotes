function sumOfTwo(a, b)
{
    const ans = [];
    let i = a.length - 1;
    let j = b.length - 1;
    let carry = 0;
    let sum = 0;
    while(i >= 0 && j >= 0)
    {
        sum = a[i] + b[j] + carry;
        carry = Math.floor(sum / 10);
        sum = sum % 10;
        ans.unshift(sum);
        i--;
        j--;   
    }
    while(i >= 0)
    {
        sum = a[i] + carry;
        carry = Math.floor(sum / 10);
        sum = sum % 10;
        ans.unshift(sum);
        i--;
    }
    while(j >= 0)
    {
        sum = b[j] + carry;
        carry = Math.floor(sum / 10);
        sum = sum % 10;
        ans.unshift(sum);
        j--;
    }
    while(carry != 0)
    {
       ans.unshift(carry);
       let sum = carry;
       carry = Math.floor(sum / 10);
       sum = sum % 10;    
    }
    console.log(ans);
}

const a = [4,3,3,8];
const b = [2,2,7,5,3,3];
sumOfTwo(a,b);