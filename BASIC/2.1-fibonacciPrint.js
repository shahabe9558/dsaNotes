let n = 4;
let a1 = 0;
let a2 =1;
console.log(a1, " ", a2, " ");
for(let i =1; i<n-1; i++)
{
    let next = a1 + a2;
    console.log(next, " ");
    a1 = a2;
    a2 = next;
}